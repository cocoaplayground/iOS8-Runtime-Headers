/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, NSMutableDictionary;

@interface SUTabBarAppearance : NSObject <NSCopying> {
    UIImage *_backgroundImage;
    UIImage *_dividerImage;
    UIImage *_selectedDividerImage;
    UIImage *_selectionIndicatorImage;
    double _tabBarButtonSpacing;
    double _tabBarButtonWidth;
    NSMutableDictionary *_titleTextAttributes;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIImage * dividerImage;
@property(retain) UIImage * selectedDividerImage;
@property(retain) UIImage * selectionIndicatorImage;
@property double tabBarButtonSpacing;
@property double tabBarButtonWidth;


- (void)setTabBarButtonWidth:(double)arg1;
- (void)setTabBarButtonSpacing:(double)arg1;
- (void)setSelectedDividerImage:(id)arg1;
- (void)enumerateTitleTextAttributesUsingBlock:(id)arg1;
- (id)selectedDividerImage;
- (double)tabBarButtonSpacing;
- (double)tabBarButtonWidth;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dividerImage;
- (void)setDividerImage:(id)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (id)selectionIndicatorImage;
- (void)setBackgroundImage:(id)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundImage;

@end
