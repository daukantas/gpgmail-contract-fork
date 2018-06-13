//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

//#import "WKScriptMessageHandler.h"

@class NSString, WKWebViewConfiguration;

@interface MUIWKWebViewConfigurationManager : NSObject <WKScriptMessageHandler>
{
    WKWebViewConfiguration *_configuration;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000002d3f2
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d338
//- (void).cxx_destruct;	// IMP=0x000000000002efd6
- (id)_defaultUserStyleSheetString;	// IMP=0x000000000002ed42
- (id)_userStyleSheetString;	// IMP=0x000000000002e75f
- (id)_userScripts;	// IMP=0x000000000002e2e9
@property(readonly, copy, nonatomic) NSString *effectiveUserStyle;
@property(readonly, nonatomic) WKWebViewConfiguration *configuration;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;	// IMP=0x000000000002e111
- (void)_updateStyleSheets;	// IMP=0x000000000002dfdd
- (void)_updateFontPreferences;	// IMP=0x000000000002de4d
- (void)_updateDebuggingPreferences;	// IMP=0x000000000002dd56
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002dc09
- (void)dealloc;	// IMP=0x000000000002db38
- (id)init;	// IMP=0x000000000002d4bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
