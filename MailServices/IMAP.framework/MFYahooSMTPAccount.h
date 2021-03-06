/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class YahooAccount;

@interface MFYahooSMTPAccount : SMTPAccount  {
    YahooAccount *_account;
}

@property(getter=mailAccountIfAvailable,retain) YahooAccount * mailAccount;

+ (id)accountTypeIdentifier;

- (id)mailAccountIfAvailable;
- (void)setMailAccount:(id)arg1;
- (bool)shouldUseSaveSentForAccount:(id)arg1;
- (id)displayHostname;
- (id)preferredAuthScheme;
- (bool)usesSSL;
- (void)dealloc;

@end
