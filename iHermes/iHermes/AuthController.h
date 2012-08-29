@interface AuthController : NSObject {
  IBOutlet UIView *view;

  // Fields of the authentication view
  IBOutlet UIButton *login;
  IBOutlet NSProgressIndicator *spinner;
  IBOutlet UIImageView *error;
  IBOutlet UITextField *username;
  IBOutlet NSSecureTextField *password;
}

- (IBAction) authenticate: (id)sender;
- (IBAction) logout: (id) sender;
- (void) authenticationFailed: (NSNotification*) notification;
- (void) show;

@end
