/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKNearbyDevice : NSObject  {
    int _state;
    NSString *_playerID;
    NSString *_deviceID;
}

@property(retain) NSString * deviceID;
@property(retain) NSString * playerID;
@property int state;


- (id)deviceID;
- (void)setDeviceID:(id)arg1;
- (void)setPlayerID:(id)arg1;
- (id)playerID;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;

@end
