/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/LibraryMessage.h>

@class MessageHeaders;

@interface LibraryIMAPMessage : LibraryMessage
{
    MessageHeaders *_headers;
}

- (void)dealloc;
- (id)headers;
- (void)setHeaders:(id)arg1;

@end
