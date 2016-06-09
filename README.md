# EVTPhoneAreaCodeViewController

Easy add Phone Area Code Select Feature to your apps.

## Usage

```oc
EVTPhoneAreaCodeViewController *vc = [[EVTPhoneAreaCodeViewController alloc]init];
vc.completion = ^(NSString *name, NSString *code){
    UIButton *b = sender;
    [b setTitle:[NSString stringWithFormat:@"+%@ %@",code,name] forState:UIControlStateNormal];
};
[self.navigationController pushViewController:vc animated:YES];

```


## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

`>= iOS 7.0`

## Installation

EVTPhoneAreaCodeViewController is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "EVTPhoneAreaCodeViewController"
```

## Author

everettjf, everettjf@live.com

## License

EVTPhoneAreaCodeViewController is available under the MIT license. See the LICENSE file for more info.
