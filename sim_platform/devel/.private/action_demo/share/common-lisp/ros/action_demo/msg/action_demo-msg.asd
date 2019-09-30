
(cl:in-package :asdf)

(defsystem "action_demo-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "LinewalkAction" :depends-on ("_package_LinewalkAction"))
    (:file "_package_LinewalkAction" :depends-on ("_package"))
    (:file "LinewalkActionFeedback" :depends-on ("_package_LinewalkActionFeedback"))
    (:file "_package_LinewalkActionFeedback" :depends-on ("_package"))
    (:file "LinewalkActionGoal" :depends-on ("_package_LinewalkActionGoal"))
    (:file "_package_LinewalkActionGoal" :depends-on ("_package"))
    (:file "LinewalkActionResult" :depends-on ("_package_LinewalkActionResult"))
    (:file "_package_LinewalkActionResult" :depends-on ("_package"))
    (:file "LinewalkFeedback" :depends-on ("_package_LinewalkFeedback"))
    (:file "_package_LinewalkFeedback" :depends-on ("_package"))
    (:file "LinewalkGoal" :depends-on ("_package_LinewalkGoal"))
    (:file "_package_LinewalkGoal" :depends-on ("_package"))
    (:file "LinewalkResult" :depends-on ("_package_LinewalkResult"))
    (:file "_package_LinewalkResult" :depends-on ("_package"))
  ))