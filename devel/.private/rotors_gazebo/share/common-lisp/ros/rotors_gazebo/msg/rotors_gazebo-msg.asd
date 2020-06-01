
(cl:in-package :asdf)

(defsystem "rotors_gazebo-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "PositionCommand" :depends-on ("_package_PositionCommand"))
    (:file "_package_PositionCommand" :depends-on ("_package"))
    (:file "serial" :depends-on ("_package_serial"))
    (:file "_package_serial" :depends-on ("_package"))
  ))