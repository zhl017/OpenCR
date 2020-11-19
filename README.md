# OpenCR

## **新增項目**

**turtlebot3_mecanum**

**turtlebot3_mecanum_with_openmanipulator**

## 如何使用

### 安裝`OpenCR Board Manager`

[**Windows**](https://emanual.robotis.com/docs/en/parts/controller/opencr10/#install-on-windows)

[**Linux**](https://emanual.robotis.com/docs/en/parts/controller/opencr10/#install-on-linux)

[**Mac**](https://emanual.robotis.com/docs/en/parts/controller/opencr10/#install-on-mac)

### 覆蓋文件

```
turtlebot3_motor_driver.h >> $(arduino15)\...OpenCR\$(version)\libraries\turtlebot3\include\turtlebot3
```

```
turtlebot3_motor_driver.cpp >> $(arduino15)\...OpenCR\$(version)\libraries\turtlebot3\src\turtlebot3
```

```
SensorState.h >> $(arduino15)\...OpenCR\$(version)\libraries\turtlebot3_ros_lib\turtlebot3_msgs
```


