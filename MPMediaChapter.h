/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MPMediaChapter : NSObject  {
    int _chapterType;
    unsigned int _indexInChaptersWithAnyType;
    unsigned int _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _valueLoader;

}

@property int chapterType;
@property(retain) id value;
@property double playbackTime;
@property double playbackDuration;
@property(copy) id valueLoader;
@property unsigned int indexInChaptersWithSameType;
@property unsigned int indexInChaptersWithAnyType;


- (id)valueLoader;
- (unsigned int)indexInChaptersWithSameType;
- (void)setValueLoader:(id)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setPlaybackTime:(double)arg1;
- (void)setIndexInChaptersWithAnyType:(unsigned int)arg1;
- (void)setIndexInChaptersWithSameType:(unsigned int)arg1;
- (void)setChapterType:(int)arg1;
- (int)_sortByChapterIndex:(id)arg1;
- (unsigned int)indexInChaptersWithAnyType;
- (double)playbackTime;
- (int)chapterType;
- (double)playbackDuration;
- (void)dealloc;
- (id)title;
- (id)description;
- (double)duration;
- (void)setValue:(id)arg1;
- (id)value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
