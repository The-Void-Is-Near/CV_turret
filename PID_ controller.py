import time,random
from simple_pid import PID

global x
x:int = 0

def read_sensor(x):
    x = random.randint(-100, 100)
    return x

def apply_actuator_signal(x, U):
    x+=U
    
while True:
    pid = PID(Kp=2.0, Ki=0.1, Kd=0.05, setpoint=100.0)
    print(f"pid: {pid}")
    pid.output_limits = (0, 100) 
    current_value = read_sensor(x) 
    print(f"curr_val: {current_value}")
    control_output = pid(current_value) 
    print(f"outval {control_output}")
    apply_actuator_signal(x,control_output)
    print(f"After change: {x}")
    time.sleep(0.1)
