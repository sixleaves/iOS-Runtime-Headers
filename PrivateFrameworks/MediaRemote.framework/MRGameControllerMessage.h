/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerMessage : MRProtocolMessage {
    BOOL  _eventInitialized;
    struct { 
        int type; 
        union { 
            struct { 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } gravity; 
                struct { 
                    double x; 
                    double y; 
                    double z; 
                } userAcceleration; 
            } motion; 
            struct { 
                double buttonA; 
                double buttonX; 
                double buttonPause; 
            } buttons; 
            struct { 
                struct { 
                    double buttonA; 
                    double buttonX; 
                    double buttonPause; 
                } buttons; 
                double dpadX; 
                double dpadY; 
                double buttonB; 
                double buttonY; 
                double leftShoulder; 
                double rightShoulder; 
                double leftThumbstickX; 
                double leftThumbstickY; 
                double rightThumbstickX; 
                double rightThumbstickY; 
                double leftTrigger; 
                double rightTrigger; 
            } extendedButtons; 
            struct { 
                double x; 
                double y; 
                bool touchDown; 
                unsigned int timestamp; 
            } digitizer; 
        } ; 
    }  _gcEvent;
    BOOL  _hasEvent;
    unsigned int  _priority;
}

@property (nonatomic, readonly) unsigned int controllerID;
@property (nonatomic, readonly) struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_2_1_2; struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; double x_3_2_6; double x_3_2_7; double x_3_2_8; double x_3_2_9; double x_3_2_10; double x_3_2_11; double x_3_2_12; double x_3_2_13; } x_2_1_3; struct { double x_4_2_1; double x_4_2_2; bool x_4_2_3; unsigned int x_4_2_4; } x_2_1_4; } x2; }*event;

- (unsigned int)controllerID;
- (struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_2_1_2; struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; double x_3_2_6; double x_3_2_7; double x_3_2_8; double x_3_2_9; double x_3_2_10; double x_3_2_11; double x_3_2_12; double x_3_2_13; } x_2_1_3; struct { double x_4_2_1; double x_4_2_2; bool x_4_2_3; unsigned int x_4_2_4; } x_2_1_4; } x2; }*)event;
- (id)initWithButtons:(struct { double x1; double x2; double x3; }*)arg1 controllerID:(unsigned int)arg2;
- (id)initWithGameControllerEvent:(const struct { int x1; union { struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_1_2_1; struct { double x_2_3_1; double x_2_3_2; double x_2_3_3; } x_1_2_2; } x_2_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_2_1_2; struct { struct { double x_1_3_1; double x_1_3_2; double x_1_3_3; } x_3_2_1; double x_3_2_2; double x_3_2_3; double x_3_2_4; double x_3_2_5; double x_3_2_6; double x_3_2_7; double x_3_2_8; double x_3_2_9; double x_3_2_10; double x_3_2_11; double x_3_2_12; double x_3_2_13; } x_2_1_3; struct { double x_4_2_1; double x_4_2_2; bool x_4_2_3; unsigned int x_4_2_4; } x_2_1_4; } x2; }*)arg1 controllerID:(unsigned int)arg2;
- (unsigned int)priority;
- (BOOL)shouldLog;
- (unsigned int)type;

@end