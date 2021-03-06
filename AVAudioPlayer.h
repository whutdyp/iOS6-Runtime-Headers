/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSData, NSDictionary, <AVAudioPlayerDelegate>, NSURL;

@interface AVAudioPlayer : NSObject  {
    void *_impl;
}

@property(getter=isPlaying,readonly) BOOL playing;
@property(readonly) unsigned int numberOfChannels;
@property(readonly) double duration;
@property <AVAudioPlayerDelegate> * delegate;
@property(readonly) NSURL * url;
@property(readonly) NSData * data;
@property float pan;
@property float volume;
@property BOOL enableRate;
@property float rate;
@property double currentTime;
@property(readonly) double deviceCurrentTime;
@property int numberOfLoops;
@property(readonly) NSDictionary * settings;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(copy) NSArray * channelAssignments;


- (id)initWithData:(id)arg1 error:(id*)arg2;
- (BOOL)isPlaying;
- (BOOL)prepareToPlay;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (void)setChannelAssignments:(id)arg1;
- (id)channelAssignments;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (BOOL)isMeteringEnabled;
- (int)numberOfLoops;
- (void)setNumberOfLoops:(int)arg1;
- (double)deviceCurrentTime;
- (float)pan;
- (void)setPan:(float)arg1;
- (void)setRate:(float)arg1;
- (BOOL)enableRate;
- (void)setEnableRate:(BOOL)arg1;
- (BOOL)playAtTime:(double)arg1;
- (unsigned int)numberOfChannels;
- (void)privCommonCleanup;
- (void)endInterruption;
- (void)endInterruptionWithFlags:(id)arg1;
- (void)beginInterruption;
- (void)decodeError:(id)arg1;
- (void)finishedPlaying:(id)arg1;
- (id)baseInit;
- (struct AudioPlayerImpl { id x1; id x2; id x3; id x4; id x5; struct AVAudioPlayerCpp {} *x6; id x7; }*)impl;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (float)rate;
- (BOOL)play;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)dealloc;
- (id)data;
- (void)finalize;
- (id)settings;
- (void)pause;
- (double)duration;
- (id)url;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
