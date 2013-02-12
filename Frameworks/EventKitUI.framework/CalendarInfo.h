/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class GroupInfo, UIColor;

@interface CalendarInfo : NSObject {
    void *_calendar;
    UIColor *_color;
    GroupInfo *_group;
    BOOL _selected;
}

@property void *calendar;
@property(retain) UIColor *color;
@property GroupInfo *group;
@property(copy,readonly) NSString *title;
@property(readonly) NSInteger displayOrder;
@property(readonly) BOOL isSubscribed;
@property BOOL selected;

- (void*)calendar;
- (id)color;
- (void)dealloc;
- (NSInteger)displayOrder;
- (id)group;
- (id)initWithCalendar:(void*)arg1;
- (BOOL)isSubscribed;
- (BOOL)selected;
- (void)setCalendar:(void*)arg1;
- (void)setColor:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)title;

@end