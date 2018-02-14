#!/usr/bin/env python
import rospy
from sensor_msgs.msg import LaserScan
from sensor_msgs.msg import Imu

def logScanner(data):
    
    f.write(str(data.ranges)+'\n')

    #rospy.loginfo(max(data.ranges))

def logImu(data):
    g.write(str(data.orientation)+'\n')

    #rospy.loginfo(max(data.orientation))

def listener():

    rospy.init_node('listener', anonymous=True)

    rospy.Subscriber('scan', LaserScan, logScanner)
    rospy.Subscriber('imu/data', Imu, logImu)

    rospy.spin()

if __name__ == '__main__':
    f = open('/home/automation/laser_ws/laserData.txt', 'w')
    g = open('/home/automation/laser_ws/imuData.txt', 'w')
    listener()
    f.close
    g.close()

