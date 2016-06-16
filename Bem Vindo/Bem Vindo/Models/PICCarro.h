//
//  PICCarro.h
//  Bem Vindo
//
//  Created by C1284047 (Edi Vergis) on 6/15/16.
//  Copyright © 2016 Edi Vergis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IPICNovasFuncoes.h"

@interface PICCarro : NSObject <IPICNovasFuncoes>{
    //NSString *_nome;  antes era necessário declarar a variável aqui e sintetizar no .m (@synthesize)
    //NSInteger _ano;
}

- (instancetype) init __attribute__((unavailable("init not available"))); //desabilitando o construtor padrão
- (instancetype) initComNome:(NSString*)nome ano:(NSInteger)ano;
@property (nonatomic, strong) NSString* nome;
@property (nonatomic, assign) NSInteger ano;

@end
