#!/usr/bin/env python
import rospy
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Header

def talker():
    pub = rospy.Publisher('recorded_scan', LaserScan, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(12)
        
    lines = f.readlines()
    scancount = 0
    i=0

    while not rospy.is_shutdown():
        if i >= len(lines):
            scancount = 0
            i=0
            f.seek(0)
            
        if len(lines[i]) > 100:
            scancount += 1
            scan = LaserScan()

            scan.header.stamp = rospy.Time.now()
            scan.header.frame_id = 'laser'
            scan.angle_min = -2.28987193108
            scan.angle_max = 2.28987193108
            scan.angle_increment = 0.0069813169539
            scan.time_increment = 0.083333
            scan.scan_time = 0.0833*scancount
            scan.range_min = 0.002
            scan.range_max = 50
            scan.ranges = map(float, lines[i][1:-2].split(', '))
            scan.intensities = map(float, lines[i][1:-2].split(', '))

            pub.publish(scan)
            rate.sleep()

        i+=1


if __name__ == '__main__':
    f = open('/home/automation/laser_ws/laserData.txt', 'r')
    talker()
    f.close

