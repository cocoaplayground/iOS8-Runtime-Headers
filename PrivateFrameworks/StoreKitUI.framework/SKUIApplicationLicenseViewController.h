/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIApplicationLicensePage, UIWebView, NSURL, SSVLoadURLOperation;

@interface SKUIApplicationLicenseViewController : SKUIViewController  {
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}


- (id)initWithLicenseAgreementPage:(id)arg1;
- (void)_displayPage:(id)arg1 error:(id)arg2;
- (id)initWithLicenseAgreementURL:(id)arg1;
- (void).cxx_destruct;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;
- (void)reloadData;

@end
