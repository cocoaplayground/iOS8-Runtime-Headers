/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIModalItemsPresentingViewController, _UIModalItem, UITableView, UILabel, UIButton, UIView, UITextField, NSMutableArray, UIViewController;

@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    _UIModalItem *_modalItem;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_messageLabel;
    UITextField *_loginTextField;
    UITextField *_passwordTextField;
    NSMutableArray *_otherButtons;
    UIViewController *_accessoryViewController;
    struct CGSize { 
        float width; 
        float height; 
    } _accessoryViewControllerSize;
    UIView *_accessoryViewControllerContrainerView;
    struct CGSize { 
        float width; 
        float height; 
    } _actualViewControllerSize;
    UIButton *_cancelButton;
    UIButton *_defaultButton;
    int _cancelButtonIndex;
    int _defaultButtonIndex;
    UITableView *_buttonTable;
    struct CGSize { 
        float width; 
        float height; 
    } _presentingSize;
    _UIModalItemsPresentingViewController *_presentingViewController;
    struct CGSize { 
        float width; 
        float height; 
    } _maxSize;
}

@property _UIModalItem * modalItem;
@property struct CGSize { float x1; float x2; } presentingSize;
@property struct CGSize { float x1; float x2; } maxSize;
@property _UIModalItemsPresentingViewController * presentingViewController;
@property(readonly) UILabel * titleLabel;
@property(readonly) UILabel * subtitleLabel;
@property(readonly) UILabel * messageLabel;
@property(readonly) UITextField * loginTextField;
@property(readonly) UITextField * passwordTextField;
@property(readonly) UIViewController * accessoryViewController;
@property(readonly) struct CGSize { float x1; float x2; } accessoryViewControllerSize;
@property(readonly) UIView * accessoryViewControllerContrainerView;
@property(retain) UIButton * cancelButton;
@property(retain) UIButton * defaultButton;
@property(readonly) int cancelButtonIndex;
@property(readonly) int defaultButtonIndex;
@property(readonly) UITableView * buttonTable;
@property struct CGSize { float x1; float x2; } actualViewControllerSize;


- (void)layout;
- (void)dealloc;
- (id)buttonTable;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (id)accessoryViewControllerContrainerView;
- (struct CGSize { float x1; float x2; })accessoryViewControllerSize;
- (id)accessoryViewController;
- (id)messageLabel;
- (id)subtitleLabel;
- (void)setActualViewControllerSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })actualViewControllerSize;
- (void)setPresentingViewController:(id)arg1;
- (void)setPresentingSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })presentingSize;
- (void)setMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setModalItem:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (id)loginTextField;
- (id)passwordTextField;
- (void)textFieldValueDidChange:(id)arg1;
- (id)modalItem;
- (int)defaultButtonIndex;
- (void)_createViewControllerContentView;
- (void)_createAndConfigureButtonTable;
- (void)_createAndConfigureTextFieldsForInputStyle:(int)arg1;
- (void)_createAndConfigureMessageLabel;
- (void)_createAndConfigureSubtitleLabel;
- (void)_createAndConfigureTitleLabel;
- (struct CGSize { float x1; float x2; })maxSize;
- (id)presentingViewController;
- (int)cancelButtonIndex;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)titleLabel;

@end