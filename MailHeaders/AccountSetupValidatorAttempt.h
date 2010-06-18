/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@interface AccountSetupValidatorAttempt : NSObject
{
    unsigned int _portNumber;
    int _securityLayerType;
    BOOL _usesSSL;
}

+ (id)attemptsForAccount:(id)arg1 accountInfo:(id)arg2;
- (id)description;
- (int)securityLayerType;
- (void)setSecurityLayerType:(int)arg1;
- (BOOL)usesSSL;
- (void)setUsesSSL:(BOOL)arg1;
- (unsigned long)portNumber;
- (void)setPortNumber:(unsigned long)arg1;

@end
