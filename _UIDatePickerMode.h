/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDate, _UIDatePickerView, UIFont, NSDateComponents, NSString, UIColor, NSArray;

@interface _UIDatePickerMode : NSObject  {
    NSDateComponents *_selectedDateComponents;
    NSDateComponents *_baseDateComponents;
    unsigned int *_elements;
    int _yearsSinceBaseDate;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _maxDayRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _maxMonthRange;
    NSString *_localizedFormatString;
    NSArray *_dateFormatters;
    unsigned int _numberOfComponents;
    NSString *_amString;
    NSString *_pmString;
    int _minuteInterval;
    NSDateComponents *_todayDateComponents;
    double _todaySinceReferenceDate;
    UIFont *_font;
    UIFont *_amPmFont;
    UIFont *_defaultTimeFont;
    UIColor *_todayTextColor;
    NSDate *_baseDate;
    NSDate *_minimumDate;
    NSDateComponents *_minimumDateComponents;
    NSDate *_maximumDate;
    NSDateComponents *_maximumDateComponents;
    NSDate *_originatingDate;
    _UIDatePickerView *datePickerView;
}

@property(readonly) int datePickerMode;
@property(readonly) float rowHeight;
@property unsigned int numberOfComponents;
@property(readonly) int displayedCalendarUnits;
@property(readonly) UIColor * todayTextColor;
@property int minuteInterval;
@property(retain) NSDateComponents * todayDateComponents;
@property double todaySinceReferenceDate;
@property(readonly) NSDate * minimumDate;
@property(readonly) NSDateComponents * minimumDateComponents;
@property(readonly) NSDate * maximumDate;
@property(readonly) NSDateComponents * maximumDateComponents;
@property(retain) NSDateComponents * selectedDateComponents;
@property _UIDatePickerView * datePickerView;
@property(readonly) UIFont * amPmFont;
@property(readonly) UIFont * font;
@property(readonly) UIFont * defaultTimeFont;
@property(readonly) UIFont * sizedFont;
@property(readonly) NSString * amString;
@property(readonly) NSString * pmString;
@property unsigned int* elements;
@property(retain) NSString * localizedFormatString;
@property(retain) NSDate * baseDate;
@property(retain) NSDateComponents * baseDateComponents;
@property int yearsSinceBaseDate;
@property(retain) NSDate * originatingDate;

+ (id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2;
+ (id)newDateFromGregorianYear:(int)arg1 month:(int)arg2 day:(int)arg3 timeZone:(id)arg4;
+ (unsigned int)extractableCalendarUnits;
+ (id)_datePickerModeWithMode:(int)arg1 datePickerView:(id)arg2;
+ (int)datePickerMode;

- (id)font;
- (unsigned int*)elements;
- (void)setElements:(unsigned int*)arg1;
- (id)init;
- (void)dealloc;
- (id)calendar;
- (id)timeZone;
- (id)locale;
- (id)maximumDateComponents;
- (id)minimumDateComponents;
- (id)defaultTimeFont;
- (int)yearsSinceBaseDate;
- (double)todaySinceReferenceDate;
- (float)componentWidthForTwoDigitCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (BOOL)_isComponentScrolling:(int)arg1;
- (id)todayTextColor;
- (BOOL)_shouldEnableValueForRow:(int)arg1 column:(int)arg2;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (int)_numberOfDaysInDateComponents:(id)arg1;
- (BOOL)_monthExists:(int)arg1 inYear:(int)arg2;
- (id)originatingDate;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(BOOL)arg2;
- (void)setSelectedDateComponents:(id)arg1;
- (int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)_dateByEnsuringValue:(int)arg1 forCalendarUnit:(unsigned int)arg2;
- (int)valueForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (int)eraForYearRow:(int)arg1;
- (int)yearForRow:(int)arg1;
- (int)monthForRow:(int)arg1;
- (int)dayForRow:(int)arg1;
- (int)secondForRow:(int)arg1;
- (id)_dateForYearRow:(int)arg1;
- (int)_incrementForStaggeredTimeIntervals;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForCalendarUnit:(unsigned int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (void)setLocalizedFormatString:(id)arg1;
- (void)clearBaseDate;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (id)localizedFormatString;
- (void)setNumberOfComponents:(unsigned int)arg1;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (float)totalComponentWidthWithFont:(id)arg1;
- (id)sizedFont;
- (id)amPmFont;
- (id)baseDate;
- (id)baseDateComponents;
- (void)setYearsSinceBaseDate:(int)arg1;
- (void)setBaseDate:(id)arg1;
- (void)setBaseDateComponents:(id)arg1;
- (void)setOriginatingDate:(id)arg1;
- (id)todayDateComponents;
- (void)setTodaySinceReferenceDate:(double)arg1;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (id)dateFormatterForCalendarUnit:(unsigned int)arg1;
- (id)datePickerView;
- (void)_shouldReset:(id)arg1;
- (void)setDatePickerView:(id)arg1;
- (void)resetComponentWidths;
- (id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3;
- (float)widthForComponent:(int)arg1 maxWidth:(float)arg2;
- (float)totalComponentWidth;
- (void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2;
- (unsigned int)calendarUnitForComponent:(int)arg1;
- (void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
- (id)fontForCalendarUnit:(unsigned int)arg1;
- (id)selectedDateComponents;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2;
- (int)minuteForRow:(int)arg1;
- (void)loadDate:(id)arg1 animated:(BOOL)arg2;
- (void)updateSelectedDateComponentsWithNewValueInComponent:(int)arg1;
- (int)hourForRow:(int)arg1;
- (BOOL)is24Hour;
- (int)componentForCalendarUnit:(unsigned int)arg1;
- (int)displayedCalendarUnits;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (void)noteCalendarChanged;
- (void)setTodayDateComponents:(id)arg1;
- (int)minuteInterval;
- (id)maximumDate;
- (id)minimumDate;
- (int)datePickerMode;
- (void)setMinuteInterval:(int)arg1;
- (id)pmString;
- (id)amString;
- (float)rowHeight;
- (unsigned int)numberOfComponents;
- (int)numberOfRowsInComponent:(int)arg1;

@end
