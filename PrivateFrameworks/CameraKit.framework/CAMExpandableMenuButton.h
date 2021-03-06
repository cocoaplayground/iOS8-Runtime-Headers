/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSIndexSet, NSMutableIndexSet, UIView, <CAMExpandableMenuButtonDelegate>, NSMutableArray;

@interface CAMExpandableMenuButton : UIControl  {
    bool_expanded;
    long long _selectedIndex;
    long long _expansionOrientation;
    long long _orientation;
    <CAMExpandableMenuButtonDelegate> *_expandableMenuDelegate;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__hiddenIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _tappableEdgeInsets;
}

@property long long selectedIndex;
@property(getter=isExpanded,readonly) bool expanded;
@property long long expansionOrientation;
@property long long orientation;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property <CAMExpandableMenuButtonDelegate> * expandableMenuDelegate;
@property(readonly) NSMutableArray * _menuItems;
@property(readonly) UIView * _headerView;
@property(copy,readonly) NSIndexSet * _hiddenIndexesWhileCollapsed;
@property(copy,readonly) NSMutableIndexSet * _highlightedIndexesWhileCollapsed;

+ (double)expansionDuration;

- (id)_highlightedIndexesWhileCollapsed;
- (id)_menuItems;
- (id)expandableMenuDelegate;
- (bool)shouldIgnoreMenuInteraction;
- (void)completeExpansionToProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)collapseMenuAnimated:(bool)arg1;
- (void)expandMenuAnimated:(bool)arg1;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_applyMenuItemTextAlignmentForCurrentOrientation;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_updateFromSelectedIndexChange;
- (id)_hiddenIndexesWhileCollapsed;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpansionOrientation:(bool)arg1 expanded:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalExpansionOrientation:(bool)arg1 expanded:(bool)arg2;
- (long long)expansionOrientation;
- (struct CGSize { double x1; double x2; })_layoutForVerticalCollapsedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalCollapsedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpandedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpandedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalCollapsedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalExpandedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalExpandedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalCollapsedPortraitButton:(bool)arg1;
- (id)_selectedLabel;
- (bool)_wantsSelectedItemToBeVisible;
- (struct CGSize { double x1; double x2; })_layoutMenuButton:(bool)arg1 expanded:(bool)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateFromOrientationChangeAnimated:(bool)arg1;
- (void)_updateFromExpansionChangeAnimated:(bool)arg1;
- (id)hiddenIndexesWhileCollapsed;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (id)initWithExpansionOrientation:(long long)arg1;
- (void)setHighlighted:(bool)arg1 forIndex:(long long)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (void)updateToContentSize:(id)arg1;
- (void)finishExpansionAnimated:(bool)arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2;
- (void)finishCollapsingAnimated:(bool)arg1;
- (void)startCollapsingWithProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForExpansion:(bool)arg1;
- (void)setExpandableMenuDelegate:(id)arg1;
- (void)setExpansionOrientation:(long long)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (long long)numberOfMenuItems;
- (id)_headerView;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
- (id)headerView;
- (void)setSelectedIndex:(long long)arg1;
- (long long)selectedIndex;
- (bool)isExpanded;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)layoutSubviews;
- (void)reloadData;

@end
