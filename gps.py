from gps_lib import GPS
gps = GPS(0,1,115200) # rx, tx, baudrate
while True:
    if(gps.available()):
        print(gps.read_data())
