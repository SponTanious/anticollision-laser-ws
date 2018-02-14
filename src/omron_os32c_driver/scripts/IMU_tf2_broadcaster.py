#!/usr/bin/env python

import rospy
import tf
import tf2_ros
import geometry_msgs.msg
import sensor_msgs.msg
from tf.transformations import euler_from_quaternion, quaternion_from_euler
from math import pi

def logImu(IMUmsg):
    br = tf2_ros.TransformBroadcaster()
    t = geometry_msgs.msg.TransformStamped()

    t.header.stamp = rospy.Time.now()
    t.header.frame_id = "base_link"
    t.child_frame_id = "imu"

    t.transform.translation.x = 1
    t.transform.translation.y = 0
    t.transform.translation.z = 1
    
    #CAN DO TRANSFORM HERE
    #quaternionList = [IMUmsg.orientation.x, IMUmsg.orientation.y, IMUmsg.orientation.z, IMUmsg.orientation.w]
    #(roll, pitch, yaw) = euler_from_quaternion(quaternionList)
    #rospy.loginfo("Roll: "+str(roll*180/pi))
    #rospy.loginfo("Pitch: "+str(pitch*180/pi))
    #rospy.loginfo("Yaw: "+str(yaw*180/pi))
    #newQuaternionList = quaternion_from_euler(roll+pi, -pitch, -yaw)
    #t.transform.rotation.x = newQuaternionList[0]
    #t.transform.rotation.y = newQuaternionList[1]
    #t.transform.rotation.z = newQuaternionList[2]
    #t.transform.rotation.w = newQuaternionList[3]
    #CAN DO TRANSFORM HERE
    
    t.transform.rotation = IMUmsg.orientation

    br.sendTransform(t)

if __name__ == '__main__':
    rospy.init_node('IMU_tf2_broadcaster')
    rospy.Subscriber('imu/data', sensor_msgs.msg.Imu, logImu)
    rospy.spin()


