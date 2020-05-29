; Auto-generated. Do not edit!


(cl:in-package rotors_gazebo-msg)


;//! \htmlinclude serial.msg.html

(cl:defclass <serial> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (cmd
    :reader cmd
    :initarg :cmd
    :type cl:fixnum
    :initform 0))
)

(cl:defclass serial (<serial>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <serial>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'serial)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name rotors_gazebo-msg:<serial> is deprecated: use rotors_gazebo-msg:serial instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <serial>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rotors_gazebo-msg:header-val is deprecated.  Use rotors_gazebo-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'cmd-val :lambda-list '(m))
(cl:defmethod cmd-val ((m <serial>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader rotors_gazebo-msg:cmd-val is deprecated.  Use rotors_gazebo-msg:cmd instead.")
  (cmd m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <serial>) ostream)
  "Serializes a message object of type '<serial>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let* ((signed (cl:slot-value msg 'cmd)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <serial>) istream)
  "Deserializes a message object of type '<serial>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cmd) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<serial>)))
  "Returns string type for a message object of type '<serial>"
  "rotors_gazebo/serial")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'serial)))
  "Returns string type for a message object of type 'serial"
  "rotors_gazebo/serial")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<serial>)))
  "Returns md5sum for a message object of type '<serial>"
  "96d69b5d7ec20ad2ea96e00e9cdf8c75")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'serial)))
  "Returns md5sum for a message object of type 'serial"
  "96d69b5d7ec20ad2ea96e00e9cdf8c75")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<serial>)))
  "Returns full string definition for message of type '<serial>"
  (cl:format cl:nil "Header header~%int8   cmd~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'serial)))
  "Returns full string definition for message of type 'serial"
  (cl:format cl:nil "Header header~%int8   cmd~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <serial>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <serial>))
  "Converts a ROS message object to a list"
  (cl:list 'serial
    (cl:cons ':header (header msg))
    (cl:cons ':cmd (cmd msg))
))
