/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;



@interface ECCurrencyConverter : NSObject 
{
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;

- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;
- (NSInteger)xlAccountFormatFromLasso:(id)arg1;
- (void)populateDictionaries;
- (id)lassoCurrencyCodeForDollar;
- (void)dealloc;

@end