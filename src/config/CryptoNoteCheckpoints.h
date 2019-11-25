// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {0,"7fb97df81221dd1366051b2d0bc7f49c66c22ac4431d879c895b06d66ef66f4c"},
        {100,"cc04f3441bb9fb025a7b0a468146644e27844a624937de8428dec03c07096e88"},
        {200,"a511a74b5e310450c1a07ac4f68d898d1ed83c051f393c66248bb271b7bc44ec"},
        {300,"8d4c4618f92b90138ce4c7f395ead7ba55dff77bcf5d9d949520ea9acbb2c805"},
        {400,"9bbe53cd9ef4e41ba84a11dd65028665714ccda6168bef808686b5477b03949c"},
        {500,"781c7f254405ca755bde7fe812071eb7870df1c8d71342aedd50ef52df284d9d"},
        {600,"8fa01a552da7200092b637e810d7ee4349c7781e9c22483e54871aa848af72cc"},
        {700,"8f11ba5673ee66e99563413cacbac29d9fbca165793c2018c46576159f3d39bf"},
        {800,"56a5ad09fb0a79547994d0c94d9d8eaa7238dbf234972443826a27e92e3f432d"},
        {900,"3ddace1dd0843a18b3155b56c19ce16b872bd92e03914d9f10255d9edec74d6f"},
        {1000,"bea762381ce27a4b33b8c44bcfbe28fa7a03c0481b1db88b99b53adacb180843"},
        {1100,"154e591408b6e18711cc80a6e166d25fa5a980816bdf00f9a44175f3f2a42e5e"},
        {1200,"c1142dbfd4e7dbfc13b74cdc4474aa29979964c7cc2e21067823b791dc5d016b"},
        {1300,"b29d3fa233774d4db3cba3cbb9a9f694eb6b962c98735f21e8c8013480539121"},
        {1400,"fdb7301fca8ab6855ebf0049ddb490605ab5dcd6f7aac6e4844c325a725e4c81"},
        {1500,"8a61881736b37fb160784cdf09ac1b67be52e0a96406cc6970313fdee2a18950"},
        {1600,"c1ddce9a04aa183e2effe08aceec2f8fb0ed369590d7507c702bb7002f7ff061"},
        {1700,"1b0a36e641a347d536f3dba2c2c8670f8b7eb95bc5c6b226bfad585334794c2f"},
        {1800,"76f703fee8f30db98647cd46f9dd368abaf1eb5e7a494cd03a9340a1da07807c"},
        {1900,"7b008b5c1c32d026d2c648434e1cf9968fb895ba63149e9c958afb0d7baa92e3"},
        {2000,"28f15f8a95cfeb4499d83dcb58469963c28d0375678d4e0443c8a56d739a9ea8"},
        {2100,"57d467cd3d6af826fd1f87ab80624f2cffdfbad8e686b365f5fc7bff9fb408cd"},
        {2200,"662703272f9b7f2719ca649f2df221a29a7a90e58ad59353a21bd2d582da6622"},
        {2300,"8d84bc40865a12c0e854606e10981ba1a2801e836053d237c57b6302f520eb94"},
        {2400,"06edec6bd1a7c616b2dd42bde920fca9820856f7ae3f65ff268cc5ed1c409277"},
        {2500,"4513fdb3a21313550b1bd3323dd48e06342ce9b93630e3ae4370e19cf6a616a0"},
        {2600,"7d7e9adc3c8dd264c3e2e86febf03a5ba88f8853752dc6b569b7d2dc7b6fd15b"},
        {2700,"894d05e51258c9e511ddd2a17211fd372e577222d739489f933bedf2a6ba5009"},
        {2800,"a6de8a6998718df488bfab1d30a6f525aa4406fdd6c837853a0d05926c373f7e"},
        {2900,"f5671e069085564ed82c5ef27511ba2ef968fad29c23fce7def9464256ba5037"},
        {3000,"282e2394b8d1d0443f4dc064670414bcb110892a5ace4a187e1b24b4209c355f"},
        {3100,"0c563c37bf6819a156d1096534178f26e3245ef3e8e54161f2c078dd1936e23f"},
        {3200,"6ffaff3650877e9a39c7d4876a982134716e22425e51aa5a2338061beb20b30b"},
        {3300,"b6397d2cba28afdc67183924f54a4ac2efe053ab83237e5e97b16977fea41194"},
        {3400,"49f0e6a6c0d6f2c71833420d4abf721bbe943672820aff3b0372171820ec1d40"},
        {3500,"2a72f11eee87c5104f6c0e3b6c738c9956c36cda34a0449e90abfc1126a8d226"},
        {3600,"746d94c27f98347675d649be44def120e57c68530e6fd610857bacd7537ee45b"},
        {3700,"182bc10ca9932c598b22d0c829bb4360fe05e327d2b49e34331d812f0ed16a8c"},
        {3800,"92e073056080d64f8908fe1850345704cb0fd98e1a61a5f22b46c2c4ca543c79"},
        {3900,"0df3ff393491fe682da2a1c41ee60a32bfa16d8cf6e1f7df425e0e04f5ea6b0c"},
        {4000,"f81fea7fc8ad6dd575786138dfa04b93c31ca30ca2f5aee6be8b8064a65ebc8d"},
        {4100,"5eb13aa6fe97f5c5b6f96ffaab39d6b1e43dfa5728119dc8d18954af2a9227bf"},
        {4200,"8662cb4f1a9bee8b638f8fa3caea5e7c453e8149ac00f22291d2a0f53c18767b"},
        {4300,"cec53ec78c9885a36ad6e0e7ec7bd8f5adb0d8ffc79e99d86fb99ea28227089e"},
        {4400,"9409682b5e4b505655f1ee3088e1fb24d700b8cc1d4d5cd4625b7626ad971ceb"},
        {4500,"5a9830982290532d7fc6e8148fc2436331a62d6dd0e6368cda949d9637fb8b28"},
        {4600,"9b75aca5fe2e95c0ed593f10b0ef075ce6b3e875f796144f78b2c403d5f976a7"},
        {4700,"2d871eefc8b4b7fc2cc6e205623939cf26a9f4954095d8e216a90fd5a23c7efc"},
        {4800,"2a008f959966a7a199f660e32b8ad35fbd2024cc9c7fa4343cd3d9e11f755dcd"},
        {4900,"3050ac9e4381d7f6944e9ba57129636a1f613ba0331cd8e33608befa0c9add08"},
        {5000,"acb63abe6239f97b663c2273816f310af7af8ce6bc2e3c38e08f52b45a5b4744"},
        {5100,"86141ef861fe77cf8f75c70a58ddb4695442119935c72ac1f3e83a4a3d902cc4"},
        {5200,"999080d42b9b35b4512595880a152cf0ec8dfd4ebf7507a34c1cc14e1945a7d9"},
        {5300,"0e8897a36705a5205c1f93c6f1aeff7b49f305413d4b8f3794586f82dcdc0e66"},
        {5400,"f2843112b60fa18b3e0da8eec4bca4839f3f3342d17a94d5208bed403953d8ab"},
        {5500,"358b1943f2182a6bbe84fceee1a0b8cb1e05d3135e520e64ffc733f6eb63375a"},
        {5600,"f63c162343cf0d07c4ece934f64a7dee23b78c92b2300bba09d6f53dd4cef4d2"},
        {5700,"2db56eac09f3e2d3d80cb603b8b83991fc17d20c4436e2bb4df249ee9a5fd175"},
        {5800,"4c66fecc9d875cbfd594ad542579607a4745c66912d2a07424430cc6eff3b547"},
        {5900,"ba57c9bdacc407788d47e1115e111fb0a063b2d0437b3ecda5380a63c5743c7b"},
        {6000,"84fd4779b7c69533a7c2a5d6234fd881621e6f7a0240f19006d24338b929ffd7"},
        {6100,"23cc337492824b6c00b2b0aed27db48fff5410c57d36915fc3ddfded424a5130"},
        {6200,"d9e57a2bd21a8a0cf381527b4a6a422d0b11ff2305d5e656682e2be95a112ed3"},
        {6300,"e32eed6752ca83539be6ace576aa86da35716d4510254d14994dc9588d4d9535"},
        {6400,"af61e16023f77d52f6be3a18a49b349699d31b4f0a8b4c81be1a32a77c96ddab"},
        {6500,"c5fc7b262c66aa577121d6a24fcb84b86f4e132e258bc79b4db21b4d47921c9e"},
        {6600,"62aa7b7c186276993574a73ad84d885c04b950ccbc6cb8a11e9212d09e69f518"},
        {6700,"df026309bf2564530a6fa7ff871e98e9531be14ddead0878c2539187bfb71e12"},
        {6800,"7e274cd7f4fab8bd5d54006d2951f8124f402d63cedcd9a3e03f4f1ecac6eaf5"},
        {6900,"60a8ddbe842b6a84656b0a74cfd97a3e36fed1b9790c609b4b7046224f6fe7a2"},
        {7000,"4fd1912461b90898403c63de4a786b4cac9040d0eb0ca038b4650e5fae80fa4d"},
        {7100,"72a491a23d51026683337e89f28cc5e272e128f801e0226022d50340713fcc6a"},
        {7200,"f582c2ffb6df814ba5702a41f466fa886738dc658cae1fedfe2c416680551273"},
        {7300,"6b00a676c0b10a56ba78dc0c52080d266759bfe68c23a86a22147c0e6ea99119"},
        {7400,"bd88affd7c5e8bfcb79c0463b40851ed29c54a8d0984ab2e853eaee5445b5391"},
        {7500,"2519cd0a4740372f792910a991300a761e16387547ffceb46c016cd4f19e9bee"},
        {7600,"b6ad5baf9c874b5c21bf3aa1a4bdddea1c2df69224d7c59cc5f12e8238bf8223"},
        {7700,"88fb2ecaa0aee34d0b8f4df1a6424ea0240bb4fc8a2a554eb64bc4a01480c09d"},
        {7800,"9b8388815f22562cef85a6fb65286837e78c264eaebbc86fba228bad3a7f0791"},
        {7900,"1d2212112e67f908d4d95345c1016475a22eecd2b456f61086530318bb0b759e"},
        {8000,"f39cbe6e845970e187ba9802fc0a6e3a6ce38fe8167bfa3397de4d241adcf817"},
        {8100,"be787827220f6501cd400e3fde43d267bf5a4de2708df8237d6d870677f1f0b8"},
        {8200,"5889ecda22a9ace9e479e51147a8991f16c96df028a6c87c1df3e4c77a4fa072"},
        {8300,"19124d8d4f103ae3832d4ec769372a4b893a34f7990a91c1f4830709f30f1099"},
        {8400,"3f87f1fbed4da25ac8bb2102f9d5e976a295be094a9b114693c3f2d6fd75e0a8"},
        {8500,"f450e209fedaa545d8bc9289123177ad9a0beca27f8f259e3efffaa336cba15d"},
        {8600,"7b5d5333468fa411974f55c31b6861bd933fced4e4d9825f71a37a30fb34fe83"},
        {8700,"4d146ad9c7d39e12513583468cce93b77a360322e12ec981a675fe889b685a5e"},
        {8800,"afb6804965a3995521553b30267c82e76d8d9a892e355d8b8a547a3ad0b3b7f5"},
        {8900,"025613d8c50624c6b3c000270636fc5dc502634bc9063bfdd25aae52902ffabf"},
        {9000,"0829de65bdb0c10eb6fa0867b38d5b6d9b72bf209ab82c2ba0153d59ad54a8bc"},
        {9100,"f473bfb82fd638c73c189a399d946f3c7e0313017db4ba5cf57d94526ba0718c"},
        {9200,"fdc637add89aca25b5c747eb4f7aba7a30b7ef78f9ce3232e0f50e011573db3d"},
        {9300,"1f97216c7572baf352010a8d5f5b9cde2a354dd4e6bdcfe4141a2ba358d2332e"},
        {9400,"7ef56063d528f94d238fc7d35bc5ee72b177f43477cb77bb25b0a64e42c494b0"},
        {9500,"678614b0b6ad07da1c05a646e45b5fdb7850d5de75851c2e0d64f8491273fd5d"},
        {9600,"4cf5d4d6090ae7915f565c73a1edcf2a51c557da9e85445aebdd7af7ec7b110f"},
        {9700,"131ad15ae14d6b6ddca80d8218c3a87b5ded164a8655ea2d5ab5935b06d4502c"},
        {9800,"cce383a1ddf6a77ace4f00fdf661255579de2deb22f7b905a313a5b723e9c6ac"},
        {9900,"9e933276e41ba552703479d1ad091f16763ec47f7163774c4535848c22961cf7"},
        {10000,"90d9a950a83979c10edff20215e843adcad1928ab260da28470c95eb2705a330"},
        {15000,"6a607037a7601fa0ee2d3bfc84137b0a7114587ca17fb116f10ced60ff93cda4"},
        {20000,"55cd847160754eebf2737c9b391c78cf6e595b761b91b122c229eff3338c37bb"},
        {25000,"13c46f534f4b314ce3976c38b30bb41b0c9e5fd633e004af4e12704734ea145c"},
        {30000,"64694538e1887fde57032cc5037971c2e11e7d28329be23dc40d9d7142590a09"},
        {35000,"54575e2a4634f983cfbbe06ccfbbf06ed8f8469ee5a4e081d7e5f034bb17e37d"},
        {40000,"4230a7978ea4f09b6232d0a53eac70fa6842784bd8b9acc4e8151c1f762e74cd"},
        {45000,"4e4cd9ae5ff58a6e57d78ac80bd093648d81eed9c821faf946807d5ca19155f9"},
        {50000,"bd62ab2e668e5b3345878f83e03f1db284f0ada79a56bfe02d87209a0b4f5ddd"},
        {55000,"af76a3c5e1522c2338d2b8593424e1e02e0195729410784a8a987f7d380d19d1"},
        {60000,"f22971a0fa7331df2d0060d7976a03f24e1711f54c9cb1093534a54243a37065"},
        {65000,"c7be8e9e9124087361b7979a8642e73061740fa5d5eb86472b9e9f60085b59be"},
        {70000,"d18da06bc82afe85d95e4332db109dc2d615be4840adb3323bca1393289a44a0"},
        {75000,"3f58e09feefb310e47b8d435482c996cb832f1809b7219ed48b8c63996e79f69"},
        {80000,"fb3d92396c33cdb5706aadfdda17828df651e0bbc6f3deb03976d4c110c45080"},
        {85000,"044dd3ba96e0d8500cde7c8d8eaefb3e9a7c31a01ef51fb985aeafca1af9efd2"},
        {90000,"5a13d7e709b0d138d9c2c768adc09d2a8884fb91cb915411269def7e79314e3a"},
        {95000,"c1a4f04975904eea805cb5436763391fb64defd50f125542d2c2ebc092925989"},
        {100000,"c41849d4a986517af061e0180d29f3a42f26c17b25cd6173cc77707140de14a1"},
        {105000,"f8f6955dc45a6b910fe7086b34769b405b437c42d0e52dfb99582ceb887daa83"},
        {110000,"d791c1cb34906ca5468b109b2da734f6b03e634eb7708777d2533c24e273bc0b"},
        {115000,"bfd11423a439114d16914d349e2dca85158d8d1774422e0d1bd930bd9da818cf"},
        {120000,"5bf3d06ae540476ac4c3e15a83e051074e712454d8800acc711cff6fffdbd869"},
        {125000,"b28d42423f34ee0921bf1da76ddd676e7f6dc47d2d1e9b4e8ca723cb817ca861"},
        {130000,"f7cac4085edb093578010af805bfd178f133c8dc6580952d607939504d62f97c"},
        {135000,"ab016fa68892d1780c99bca3da0e051efcf77f7149e192905cec80ee116facf5"},
        {140000,"f5640e325a7e10aaf90aaa14d6f66c199f19b93cd7b55d439886026bcb543efe"},
        {145000,"91e0d773ae25dc54b159adfae793d1b60c5f174a866934d9790dff2b5216fcaf"},
        {150000,"43fd374133f31553c8ffda430cfcb7fa02a4b4437174f885009fbc1c227cc734"},
        {155000,"182788984ce3c2b1a73d075d297e102893a7d680d40925e83e846d71d0cebab9"},
        {160000,"39c7602a5ba139942e899da572066b7342bcd6dd879b5b012efca55d7fa9ff7e"},
        {165000,"f1205777825528f7361b0d7b4035e31b7281085abaf2c91536fa70cf5005c739"},
        {170000,"22cdc971ffd2677b9eb9e205fd0273856b792297a41b3a76e1b16e9dd8d5c66d"},
        {175000,"85b3a92faec95f7e3401a45ec97e296160f29dffc7933598db30a4b43df29e6e"},
        {180000,"0addf735c52243ffb529a5bc2ea95a843ddedbccf3909ab0f03b498b8971edb0"},
        {185000,"0cbfcb51bdb701dd65478fd765074cfc38d625786af64125193e4e32d2399b30"},
        {190000,"b7d267acdac3c63264608ab007436f52b7f22d1697ff6693899300ceba967867"},
        {195000,"efba9b9cb1816fbca4efd408ef95ff830e96c42ab3deb3751c7379bf4ee720e8"},
        {200000,"d5df8fd1c85f7b00cc2d93c52b1376c4c6eb50e4010c431fde15dbc683c32394"},
        {205000,"4d72e55ce65231f5725a39ba557beae54804909da5833b04503308844aa259da"},
        {210000,"5e41750316261bfb96e40c5a8ae4e005db84f01ef8bc0220392d12319c7a65a2"},
        {215000,"eda4708b7c75bb793edef8eb6a719b3accbf88fd80b10d402e9c3ef1ff9320f0"},
        {220000,"179112c6321ca6eb1044b54ab5547f165a31b2b45b6a776ee1cbca7929577c91"},
        {225000,"546699fc5341ba71bbcfe93f97f62da1d9d803c770ed3912d524c4b38732de00"},
        {230000,"0545e7ce31bae84261dce4f130481f64cbf5e09844b8ce71aeda6891b9c0fae7"},
        {235000,"6fb2abdc31a17d911d3559c4926bcd886a71ab8d5a398e7928ff68f2368c9615"},
        {240000,"d54f684d28ce8d0bffa98fd7cdd3c99e28d73e1e3c44f0d8495799d1b3a5a1a6"},
        {245000,"bda5b6b7aa4454434bc42c5a1623e087d74dba4a5989c7d0af31310cde33e7dc"},
        {250000,"853ccbb5913764dafb7e09ca61003679f981e63197430797358e7342cd7ed30d"},
        {255000,"e45047a9100fd976e2a27d517d7c9bef6ee0c9f2b02f71b6d824fdec5558f40b"},
        {260000,"81da50dd828520c04cd74edb3ac8b00dd6e146f08201156f8e386f043ad00e37"},
        {265000,"bda1c03ce860e911537801376715b3ae14c3e69549aa0c7175f2d8b195218496"},
        {270000,"1474ac8e3fee73893d3190ae2f02b88a71c0ec448cf35cc9b7ef9977e8877edb"},
        {275000,"82483acae3f5638b6418fa362b8a830ce0c5d637de59c5366dd209a618a0c745"},
        {280000,"c2d9e5b01390ad09fea2b8665115c7151a9ce50172f731227d09549e18b8b489"},
        {285000,"20015bd977a826b46a39686a10d4ca141fc523276ba3b7a2ad23bca0ad524dcc"},
        {290000,"a5c09226fbfe3fdccf07aedcc33886e893a3d7cda1a6c2f6e9e9f6ba3aa88bd2"},
        {295000,"f2c7020dce653f7c7e16bf2f7f69ca10ebbd845ee14cd0dfc4bdcd677df682d0"},
        {300000,"d25f17e5ee855a5502ea28736bf87008b9892d385bf08776765fe09b35986269"},
        {305000,"2d177cd9aa497f19cee183240e62ca7f4e4429c974f2a8ba7886726bdb11d8eb"},
        {310000,"1c041e30b66f5eaf628ea71ddd9f1d86ac202031104d7977c483b6187605ac9a"},
        {315000,"24a2a6cd563c55275aaa286d38c18a398ce5ea3f84628b5c9788f9ab89ac4a4d"},
        {320000,"9031956b4fa3f6c93f6128293a3091e2a7ab8e64f5a22fd63e7d30b757ff35b0"},
        {325000,"d9959ad440d4ea1321603b29fba4dcdc42e792a9456f7706f7aa463c20bf0d4c"},
        {330000,"4f44deb18dab292ed6c22d43a0bbf208b422727a433dae1f0ff084de3c2878b0"},
        {335000,"def03a5fb1d29287134549cedad44ebc486de076796eb71dfb68e14347abba61"},
        {340000,"808415ab6ccfa1cb2c605c668bdab0d8828ba97bb3c78e2145fa561cb24ba7e8"},
        {345000,"c5020a1046ec4f1b5de6713e578294e116eb83a562a6e51134d68bd442742f08"},
        {350000,"1323bb39f2285fbcb4a31b3ce9e8e6ce96888bf38f06778aa9f571d36f57eef9"},
        {355000,"1177c0a710645882d76e1cd528df0ca5552083b7a7734339b6e1378dd66111d3"},
        {360000,"214f6462153cb803404419eceaa2c9542f0526da198ef47638764754aad607ff"},
        {365000,"b46b1bef92904481db56dec5e0fad9a0f33ed85fcaf346908e439018c587af1d"},
        {370000,"f6ac1cbd4f8fd47642ec75c7362926e8c7bd3bf9886d937c0f441ad93fec6c90"},
        {375000,"d2c97fbc0abf454ba7cd032d7f74af9c977d64a76c941f5ce3588349aeff38ad"},
        {380000,"0ade7608ed70f3f4c16ada421a7143cc4d609e36a56fef1d5d5d9033bb3665b3"},
        {385000,"c39a5fb68257c67f48795deba8dcc12d82535aaf4ad40f857bd0fb7913f2e7f1"},
        {390000,"425a7a6d249310a8c2e5ea146ba940b66c3c8306dc1a81b29ca6ac4fa666586c"},
        {395000,"6144d17d607759f92c1b7a5c8e3f2e73facf8dd421f24cea78492381b6f66a00"},
        {400000,"93312ce99dfbe1b017cc254b2a6c0cb58e07656c2b9c1136188b288b01db58f1"},
        {405000,"19e3256112dbc5b04f9c8652476ea409421b0a5960e66eaba44b88bdf4df36e6"},
        {410000,"a1de557beb48d2b103edf1b9a6b713e4924fa57541384c2bb4acb19d0182d6e5"},
        {415000,"90c9170d0f07f7c057a7045ce2ec48168c8c1c320681920f1f2b0b745b204bcb"},
        {420000,"136eade43106a15616a16c942aabd1865899dff98c21c1c2c9094a701d38aa83"},
        {425000,"12675849caa43591935201605a10bf21c2c74a2b4abbb241666509fe1ad7744c"},
        {430000,"8c46513bcb1546d8530acdf5b094336f1e39356753c68c4d58d2bc174c93cb53"},
        {435000,"b27ee65906bc9facf225c2ab6d969daf415ccc7a50c86708a45d6b38a3f0673f"},
        {440000,"0518f67af624f28d3368d252deb90613ddc62d56a73933074dab1fdbb4513a3e"},
        {445000,"969f1094214ced0ee76a16691b07b7f7e78c52f84746ca3359fddb34a4046946"},
        {450000,"0c7af2bdd7dfdaebee8ed5ad3218217231f59ff8c6ce858b9401606d2f18c396"},
        {455000,"bc20a46821649a0f43c3bcea21f11d98e17cddb60503b570802595e8154839f7"},
        {460000,"1d2be819e17e5b5f4e3a7575bfb51afdefe50f0a9a2007b3f7002975204c2255"},
        {465000,"1d3c9eb73e1c70926ed7465062077d36db2643488fd1b1cdf9d53e36676597e0"},
        {470000,"849fa62e0680a237c03544f5688700e9bf9823b46a909b77c2f6f607835a03ac"},
        {475000,"3c7202623f8397c31809c6f44e89dabfe083abb9044562504e68ebc486191f4b"},
        {480000,"e5eb298437b805b234cb257da4fb7ee541cd0fd0cf3ff1ad309a70d19fff4175"},
        {485000,"91f8d5f6e6044dedcf338173d806465566ad2fdc1be7611b4493f15c1f55aa86"},
        {490000,"1f39ced1299d149d8db5e517eab88ba31908bec15c00dfbcb4a1e5427fe712fc"},
        {495000,"4ad277721abb3528562853ee233889be3981f3ccfe7b56a2b80299e6d11e8776"},
        {500000,"fe0b9b319566bb53ad37c928c3ca1171909bec0426592093b07ef511dd9dbf33"},
        {505000,"7df6ebdb0280113192a9298b93089ee7187a57ba4d668bc80146ca9bb59e5ab3"},
        {510000,"7fae5ed01ad2a90fdb327ebf6f1ea17490e6be0c3c5cfdf0a072d3d590eaafe0"},
        {515000,"2db5040a8265737d1d5f836fa45983ead20a9d7848a4c0d141fdf8dd9ae2dcfd"},
        {520000,"1dce87e4c382ab2e1481d8533fbb19918dcc90975f4e7de3860840373f2f2809"},
        {525000,"7dcb41d687ae9d2902c8424e5a7df144666da888498e2bb1bf78725cbc1c3564"},
        {530000,"e611ff8672b1419fd0785a89194694e52fc1d101212dc670915927737a3af0ee"},
        {535000,"f4b0886cf6b82a34f83544323d09d488e27295b928fae7b73a61a592144cfb7e"},
        {540000,"879702ec4f0c7c8feb3bfcf791a620baec25955bf0f4c79fcc47dbc1b81dd448"},
        {545000,"06a2703125f6900ad8e6215ecaff97fdb9add906578bbdef23fe6befb860b177"},
        {550000,"8df708fd14566dd07479f2cc20182f7086c90fdf2e0ee19b4b0d49102566ebc2"},
        {555000,"9d0b29572c5818d12a4ea49c916356ff5844cd697fdb06c42c82d97c32daf7a3"},
        {560000,"553fcf124da36e764599e728e7fca717a48eff5c8e3c9c9f881035419b778f00"},
        {565000,"fc6f55ad06ad714e2b9ddbc7600891b355fc4a0c10851ccaa69d1d8da35801d3"},
        {570000,"a71605fded38051b8f106aed7cdc68bf8ed6772687d2f8bec50903177caa78a1"},
        {575000,"574d630c4412ffe11c155ead5614ebbc258cc127f550ad2462c069c786b8646d"},
        {580000,"78b64c705a04f5f5cc09129a4857558be9be610c0df6de3bd437d9b6da02449f"},
        {585000,"4dbebd3f16bf423be9a26dd7e65590972359c80722ead875f9ac4ed01b146d30"},
        {590000,"3d59c40065ea22ded808dc38750464d50e869acbfc06e92f8fdbd29e38740beb"},
        {595000,"f3e335a7ca1a431d5207a79f511491f973e9544e6e40ca36169720ef0f98cfa0"},
        {600000,"162402236d885f3d0711ff3d583932f2747aaae31d9ce2f9e7546c9ae97ecc11"},
        {605000,"59f2056d809e6be1c1d7a8ee9b87b761efdd95eabed9d26b61342c723059c2f5"},
        {610000,"3712a76bf53dcc03bfc87cd8eb8bd8fb9a49e6e6ca536fef9d6dbe4d9a779efc"},
        {615000,"e8b934b557d088a7714fadeead3cda3ef6f13ed918df4bb74bf03495727a38eb"},
        {620000,"63aadc214b4ed5bc4fcd29d6d6ff0e17653d1349ccb864d76cac2eaf07b14545"},
        {625000,"8f5411a83cb3a04e0e273c8339cc1f6834f3d558bae7233c3846054744061bbf"},
        {630000,"b814e850b7ca1710f820478ba0c429d38faa3565520d6a201e09999a5f014710"},
        {635000,"f067e89519b7282122548397d64c12be91e7375f86330ee8db910bd45879828a"},
        {640000,"17b0cfccbe024128889577900d4873103f7cfdb5e4d65479b3cefdeff25f3ea4"},
        {645000,"c3e8fc82b3dea512cf9f72b39146d5f384d12a3bcee475635c7e1f37a4e63192"},
        {650000,"54d44b23ac7e0156a5967281027880f15f40a20e844f96a9998bc06976881014"},
        {655000,"e5cda0eb2f0bfc5e2a99519b09bb8f787465c20d40af67413604081158b6fdba"},
        {660000,"58290f7fd6441cfcd5be5981f26c21b59cb455186084e3653ef0a31652124dde"},
        {665000,"0c4554480ce5ef3d78eec7901da47a3065c90fbbae021334e1a7f78e16adede3"},
        {670000,"be4e8ebc5847ea5fe36c795eb4ab4414bd049b5b7a5e79e692be760cebc8fb2c"},
        {675000,"7ad95d2cde5bee956e26fd47dcefb0788260576f8268542f4dd36b76a98f4039"},
        {680000,"e1c7d16d99eea7fd1adde498dca82416e2d40a8c40df3fe0fc6268cbbc7b273b"},
        {685000,"24d68a7ecbe1e100130e01a92438d3786672c59ce38ae12240b6645c9a65a040"},
        {690000,"82770d2b563c570d62ef2fd006232d6c7b009e7bd2a2152f42a1cd92d7afae5a"},
        {695000,"f66cb9a73e66b7f0e5b0bf6ccdd71cb6ff53c564f099ad3d9f4fb60057c86c2b"},
        {700000,"75e6b6a29344864b2a8dfba470cc719ec2726a2af6c0d80c1336de55a38f5a99"},
        {705000,"0faa8b49e3c68b770e86bbf4fa95dc491929e21cc7ca81d5dd867bd0315ef5ff"},
        {710000,"8cb456efa555aecbf3f7c071e2e7be1e074bf010d2203bbcb1185573ac2da371"},
        {715000,"1186bad466c9a95054b83522b0d4c9d8e62fd071ed08caa4a9fcb79cb72dc85f"},
        {720000,"778e781d71a7c09a8dfe18be1d4683de665d100d1f1f189517a2d53de256cb2a"},
        {725000,"ddad14d1834e66e0ed56b17f4d4292fdf26a4b2986f95bf1ba3a57ab6c06eb2a"},
        {730000,"ed055dad58545534383633cf3069690faaaee1a5f0a5b6d5c4465689ced77477"},
        {735000,"503eac1f067dfb722fc711fad7084fad1b3d6275273f91eb9860a12e3443b74b"},
        {740000,"646799e090eb823b03b6fb16919f364fe532fe7872b4be300d2fe394874be2ff"},
        {745000,"ec5fdacc19c457d9459c7214b5ef538095f5945fe75dd62ea651f37b4373e294"},
        {750000,"3c7d47eed5d3e90743fa1ff8989b9be5f083234e88327dc9197aefeca01ede74"},
        {755000,"bc363cb4e9baa2de465826c2dfe934c1c155808c16217a7336d4b6875aab4619"},
        {760000,"7a7d46f306fd865c0a0dd9e08ad0c4d59b854df3ed50c1324827ba7278a9b001"},
        {765000,"42e8f1be6d938af9975896da612e815782683193f40797d95f5c8027456f6756"},
        {770000,"cb414c21ea64d1c8ad842a01acb543dc8f907b2d03da0481780dab34d78946e5"},
        {775000,"e679ac4224062eaa9a59054d05c96bb26cd6d95230d10e637404d7bcfd9a419a"},
        {780000,"eb3665e0d2c165defab7601e7b1e725b1d2abb6c1c315cdb0ea821c55d51ac8e"},
        {785000,"4b098ab23d495718c1e1e92406b3a7ced6c03da7da23f9484f194a1e6e31eba9"},
        {790000,"e0f98aec5466aa3e5dc95b6e2c7a6e9902394941f1c297953aa390ac7d5c7bab"},
        {795000,"a5ccd5927f549a942d0d3f84cf60530f0b4b8990c5c78c63dae831171b95b392"},
        {800000,"2153ff587c11cd98208c21e2725d3e0c545d7038754976cb75371978f186b9f3"},
        {805000,"67b0e58889c6e830b1678b24ca40b772b02e24ac861ced0195f7d3b171dbaa1e"},
        {810000,"32fb45db215460f95bc78f1021661356f74f214d83644e4b21f02d2d59534701"},
        {815000,"8a3b2b0729c66031658a5532535360ad00e4cfdae8d973c1bd5f6f3860c7bbd8"},
        {820000,"f18f02869126121ae5c913ae6f688f51039d0c30ac7afdc65571fcaff2e9302a"},
        {825000,"9f301204670d918519375490954559f23750dc96c130d88421d5e881ba119f91"},
        {830000,"9bb46b3bda09bffac13ee34ff4032dad2e979140160740c0170b75aa6a8ad3fb"},
        {835000,"7644ad1810ff519504c68e5190b923bd7a54ce165af0e9f8fc1b84f3b4e03b9c"},
        {840000,"45eaac75749c6ebb3234b2767b3b9bd7e0c55dd9bb9f5895907e4d48a22d6f55"},
        {845000,"0d4f0e1fea0f3f943947f4c226ff1fc4c0337d50ed5db38876306e4b9546a643"},
        {850000,"7d796151d86a1fdbf9c5cd00fe5baa1a970bcb9cfeb2e043be05258d87d629ab"},
        {855000,"fdad7def8ad181c883aa4a3ac41a7c08622b77719766f93f2c681680be53f740"},
        {860000,"c4fa4b14708f7a550437f903e8e6fa46372a08907f2371b5cc851ff2794bbd38"},
        {865000,"ef1297deb91ad15d1d64edc7aae31d25fabb6ebe0dd150a0c98131b44a343614"},
        {870000,"243ee413c86fcd08770cfe18cbbe5308b22a4d0b45103a558d130d17a4c25354"},
        {875000,"425c1376c0aba39fddcf5a55c45da9310fa5c5b656d8d9fbec423444e7cf56b8"},
        {880000,"ac1fa4e2e45f2d59dd863342bd5387aecd1f2ea09f340bc2a476c9c6a5de44c2"},
        {885000,"712ee058b0df4a1ecae2b863d49d22d612dc66a32aa6c4dd283ebf995aa01d8e"},
        {890000,"a591ab5986abf8c0152c4f765134414cf2c300d6be4a21e372bb21ac552cb85a"},
        {895000,"f9e24b35829f95f9c59f01e7b1d27624c589b23e452a6f7be579a809d664ca07"},
        {900000,"b952c2b040799eb9c750cf3178b2db644e38263a42d228d59b1237875cdda7cb"},
        {905000,"d3f5af6ef474d7e1ebaaea275db54c2cdd58580656e0738c1e123b96b70850dc"},
        {910000,"cd3e283356b352517d4e07cce4eff412710866bb44e82939b960aeabe9863273"},
        {915000,"8fcd9eac0d5feabdf4d2881203ef6fed77ec3476a015822f8fad1785dd54a03a"},
        {920000,"6608ba9d6e3737c7904407b490be69bfafbbc6e208fb3af8ee230e8531708d63"},
        {925000,"81b37cd17237756054340bef57e00afaa2d1a65af03fe0d85633e7b942d23af4"},
        {930000,"f769ba55a4e17dde578ccf972a526e10b778e11040a69ea6dd32b612d630025e"},
        {935000,"c0e610952194556104d26f2f7046a59e2e2e7e7c2bcf34e6ac1e6d71ffbab2b4"},
        {940000,"3560eef82bd7b90596fc2898051e7171e4a60f0db9d7e42660828b58acb26e7c"},
        {945000,"a763d57d0fce46dda17f62fa7e952183c11c6fd49e8000365c4d3efb47669225"},
        {950000,"6995d19310ef8a9185ca007632bcd6e53716617e5343e52cb34768d4e235dfb7"},
        {955000,"ba12297a4df7dede25b054e9bf44899baefb86e77ba4a6946bed657534db6da2"},
        {960000,"77a699555b74829323dd5bc25ce22efe597fadcac418b9e61f018e5d2e8cfc27"},
        {965000,"5397803e70d47707143136cbaeda32ff6e59ab0d5714b219f5a5f194e429f85f"},
        {970000,"9e28cfaf60118f53612660433bbe0db349e176189e6b8df56fe19e58af33f639"},
        {975000,"458a726e3d6daae5e4430b612d131ec68a681abd1f455e49733d59d27725d3ce"},
        {980000,"b33378f9fab5f2737698cb23912e14ac47ea8ae031448873504744a388c2a2d3"},
        {985000,"43f96606c34a991295033d335b36dea1a77bea49037f7b68da0ec6b03331dcf5"},
        {990000,"654b56be5dcf64b33f06c58e94c00208faf1e2c82d31e558147d4665f72c77cf"},
        {995000,"21a91503eb2255ef92774b10d2dbd6ec6d8e7e36beedf7071d4dc4625d3d9a8f"},
        {1000000,"4c97a2ff7a09aa38eb5ee2a49afa0d05b9071f470e3afc1a873a24607100ae77"},
        {1005000,"4585005e6975a507acf15bf97534a25a2bcd6630d5e0397d3b82eb0eb4e37f01"},
        {1010000,"268f0c0224b7ed4afc6e8542d3a2787ce1cbd12462312b002a38b82af2a4fd23"},
        {1015000,"f6b957592d83cb1bb02f279cd7e4e18c8377228c37e9830f108fa2b84d75b233"},
        {1020000,"b9b30481b28b40851906409f94f016ae5917d2e1894f41e96f7d6bbd0949ef6c"},
        {1025000,"9e4d8a3be231c27e562e75718f4795b0ec905f188951b33730d766d671e3ce65"},
        {1030000,"b11787d733537b4a700ff9f24a5c77b0f0f8351624e5c85a68f01c999a89ecc5"},
        {1035000,"57ac7bdbcdbe22f3a103936d234712a54803fb41f0199987cb072391381affa1"},
        {1040000,"7e1ce5d4d1d6ed61fcbbff842a7d3cab3e92745843d7440f3e601529f6d3d00e"},
        {1045000,"0ff3e2c78da67aa5bdefc297344e10d81fbef4bc64b3310d3732990e8718a648"},
        {1050000,"ebe5c09f226af7f2fa0d9c9812e73ec1f906666a77c22d6f6e4e392fc35dbe7f"},
        {1055000,"f433271b2676a7058f1a8a8ad36a19fcda1809cdf5cfaae4f3b0b6575aea7004"},
        {1060000,"dce7f42d431a6e08e70504f5a4baefedfaaa72bc92ccef59c4c84c7c59fdb08e"},
        {1065000,"d6b02e926852f4445a4ae7b42a8a68582f1e2fa99f2dc0ed54201ae061fa2851"},
        {1070000,"0f537fc72dfb004bec4f9ee5ef1c341613fb3bb1b1cf01dc37026ac9a30e8482"},
        {1075000,"055987a6d158b46f066169dc146b92ae473ffce04dc4b90129087ae467635f52"},
        {1080000,"ae6effc6a638b4560148d85d58c7e65693088bf666de3488faed48d7d7bfe960"},
        {1085000,"955308499736ea53b6a51ec2d9fbc783633aab2bcd0588e1c54839a096ccee78"},
        {1090000,"b36aa8327ea7e5f02d995d722608d3f41cf3a651e60345d5d36ac1a9a79b1a4f"},
        {1095000,"d196d52b2e32738279c4d065bee427c655c227221db9e82bd598be76553108f3"},
        {1100000,"d4ac76b37da5c4ceb71702dfd28e7688865075fceb1085bf5c960cfc3621625d"},
        {1105000,"ddd15080580bcffbc138752cc3ea3a1bde49d67f145507a64045f68386a0d014"},
        {1110000,"f36150e5bcfed595db00b20872b44f028606cfee37e2ee0bc92c3e1dcd7a1377"},
        {1115000,"cd1e334ceb3f45dd1cee90bba82cf59efa5d82fa0b28556ffac84cc391b9b398"},
        {1120000,"e758d19b5ee7a068acca982080a739e2fbdaf8f632d96e48f2134c00b1f43427"},
        {1125000,"f856aed02798d336c67e9392378379dd5ec9cf8c6fc87aa54f31dbb74077b06a"},
        {1130000,"d6f809f867a3e9be1eb9d125b7d7e4530926458e0e8681215bc84f35eae09fd8"},
        {1135000,"a297d08ccef818cdea48045195f2df76f305879828aed3c65f07d23559cdfbf0"},
        {1140000,"0de54551237a4834941042f05937e6382cd2f91fa7f7862b1ee388ea09ac47a3"},
        {1145000,"f72cbf5fbbb03efd16d17a3df59a1e09643da75bcd94a9fe00e13901720a73e2"},
        {1150000,"e226a955717e2129e4e0ee86e98626eb69baed7fd38f54af0c2faf149ba89a15"},
        {1155000,"d45884218ac1426c43c3dbe136113e999f085ba8b97b6ca6389773602616bf17"},
        {1160000,"74b6c6ad6d0d1af608219072681b7f0040e01ce0b941dc169bd788ab22bcb8e7"},
        {1165000,"e050279035dfd98520720c8557b04cf40c3b9716411032a56e4f726647d3654e"},
        {1170000,"0b85610fad8a836c3b31f61f09aaa71a450cfff222c5f66583ae8664dfe81c1e"},
        {1175000,"29844df6ed0d890977deabcbaf1c29a170fa40d44c40b5ee22ff5ec64b1f7fa9"},
        {1180000,"e262dccc13e43a92da5d7825729124fa81b8b8044493ecdff4a92a17bca36b64"},
        {1185000,"1b612e8c6ba614da890a01733de9b332f317e30fe23d8daf73a447d98f54c5a9"},
        {1190000,"cff100bdbd815ddd09c893347a1de502abb2952677810b934c62c9a76dca8823"},
        {1195000,"a7023add0b36d66685167988b3900253b256634820f90c7d92c1d2a7e0186a05"},
        {1200000,"f33d1f84b1fd5fbc138611efc0440e1ae8d1c76a9242c4cc1189abb60b111ec6"},
        {1205000,"26af143f3018ad0bd2cf034b52d8abc1016752f0c0f7560cf58bcd9638cd96e3"},
        {1210000,"59b08f6ddcb42aded88702332dab40a8b1147732cd7e5ed02cf70f5e91fb62e0"},
        {1215000,"611a3abe4cf0b21716a44dd656edaff64b37dbaee69c371fcdd4cf282b0ba198"},
        {1220000,"2c2afe12032193e2b4f48895b58e13b4623bca1c29908402bab06c16f79bd308"},
        {1225000,"2fd319f1d08851a217e06e7051aef8f42d7fd8fdf9dc916777ec069fbbe4c708"},
        {1230000,"7cba113ab3cac38d20675d7bfff374b7921cd6cbba539848b8f045e0382cc45d"},
        {1235000,"1089cd9d701a1b51185fecbf8de4b8d5c0f512e897f64f99cc3d555f8e7931f9"},
        {1240000,"2d340be0097a9d13eeefc4c39ded03298d26ffd1cb162ed437cea2f21239f20f"},
        {1245000,"4de339c7ebe1aab49e5742cc7632af62355185c224cf5d60b2d46822a080cb8b"},
        {1250000,"9f8b26864963d18dfbad8f35c1370c0aa88f3ba0714fd20519ffbe23a212e35c"},
        {1255000,"f7190325214ad64b0128c9e60413d1533d9696f509f6f5eb068d751905c5e712"},
        {1260000,"2d3119a8a6984833b2586a9e67ef9d7a38e21821ac98bcdca656a4cb76f72428"},
        {1265000,"58bf1b3361bb132a38f7b280a0eee93a71f317c8652ee2c3a0beec1c3d4758af"},
        {1270000,"9d219de9de7071a0c35ac949c255122fa0acd4e48211ca27a4775701c8514d59"},
        {1275000,"05ca4d46c4d31e099f343230560751e5d83f879c7f510a6077ed50526c3ad862"},
        {1280000,"bd4bc60fe8289ec463c7f550b0081312911a42a20d3d6c0f9a304dd11030c377"},
        {1285000,"bfec66ac3f03825e28df8748e67000a5557d13977839cd8489afa0313cde1812"},
        {1290000,"6f16370b9901465329cbf96451c9bc6eff44f68e56fc00bd5417276e2e8bb42b"},
        {1295000,"1dfe3ab58e11eb0466930d61a5f3a2167fff535c015ec7ce4067b062efad2e9e"},
        {1300000,"727e34f938a318f8f78d88bf78a415acc369327fc34ddfeb26964c22d3ad2cdf"},
        {1305000,"81a4d7979f82564b2d753b3c639107b01a7eb7dd3d37583304331b5331e59ca2"},
        {1310000,"79e7f333602c22b092903d748559f0f801cf4a4b510ea6ff46c8d20fbb8ac2ed"},
        {1315000,"f81fca866d36ce0c43443ebf61cc1b0eddb9ac17c554d4d5963bba1af1995297"},
        {1320000,"3e220da59629dfb69b80feb2bf200dc7f601291abd9938c2ded2f43e603c2361"},
        {1325000,"291a80d1f56ac95c01b688d987649a0b855e855a0f122b708cc2314dc94a3cf0"},
        {1330000,"7eb7ce605177a87cafb70a2a64231fee7e35e0280456a60e845b6498b23b28ba"},
        {1335000,"94c4b0e2dedc39f691c30177e4f9ad4c73390522b7c4facd8cbce7bbd99853ee"},
        {1340000,"71879ecfc36280c276be54313a47616da9cb170e3fad6bfc1fb61561d6bf3163"},
        {1345000,"db0783783a21e84e53dd41599679ba436b4353978de7b877e959bddccfab0e0a"},
        {1350000,"63b0097be593c8288567eed81ca256521d38b7cd62138225e0dfc4023eefdfeb"},
        {1355000,"0e600c73fcad8367e1a4d571b70a526684bffdb1755313585dea6b63b151d6ec"},
        {1360000,"526efd71bad70ddfcac691e7564ddc08feb4d84817593afce4302d2cbde39f13"},
        {1365000,"a92be9df466e1c7a4a1961e4f3a8465e00b7fc04ac13a66325e26ff5248ac882"},
        {1370000,"8d541e8be888251a89830f267669c326705202bb604a4542208189cd28a2ad65"},
        {1375000,"807cd3dbd31b7c98c034a951afcf1c484c69bdd28684b6cd921403f6eaa28c68"},
        {1380000,"ffca25ff30200beb242bed5f02a534dcf91beea790c4164d5ce34329d9f07c24"},
        {1385000,"4b0794e6bef2eed7f40c3cd2aeb8a4b7643ddbc03acc5f38587061a3ac313779"},
        {1390000,"a7f3486add6759c497728e39933d9e0e456bdf14f05b4a820fa48e2f16db6083"},
        {1395000,"3f6c260d4536811a0f93228a2b1582386d95d01f3a0bdaf618051595bdb8236c"},
        {1400000,"f58670209665d36044ba0b391892a1ce67df5a0301493c3071608c10086d1c1b"},
        {1405000,"4b904bc46276391f3fca5d9872bdd2a14ea2aae9ddbea4c9295487223d786073"},
        {1410000,"109483ce92b5a22a7d3eea31e77d2c95ceb57ab539a6444d9ce254362dfed48a"},
        {1415000,"a23869f6319cbe92dfea876b3bc0d207b5e6b4a89fb747f55af00e56a5120a70"},
        {1420000,"c491068822886eb3460d47deeb54f23ac93384ccef14f9de836191451fb2e767"},
        {1425000,"6977ee58f66ba98764c4c17076b7cbad586c033b25cae7588c295e73024bfcef"},
        {1430000,"45286410bb529dc0f26c8727a70ce6a48baed252ae0c807a3dfcecb3d05b187a"},
        {1435000,"b6b9908b5e8133acbda4a0ffc90b784e257059ce383643c6551ab7eecaf93e5b"},
        {1440000,"8855697032e487a1a9de22185e2c3612b90f3861f5063da9789e5ce446d9ebdb"},
        {1445000,"2495dae94ffe0cb5ba5e3d4be13e55235a9abfad7c6e656bb3f9e72d8cdac530"},
        {1450000,"bab27fda5383cef2b5696bbc047f8ebc7fb8755fd623df25bebd004d112f679f"},
        {1455000,"8510b7c41dd6b7036d4f3eaf3fad4d6cbfa0a4c82315ed986af55175d0a0720a"},
        {1460000,"955fca91e615c3a68535acf10da283efb35f02043f4f1c96027ce794a1521528"},
        {1465000,"bb90655aaa241defb643849d9f8abbcdef5e552745ab0eca76b95e1764c756c9"},
        {1470000,"eef4dbf958ecddad0d9adb6402b6aa787353cc7014ad67a0c39744d8d541ea72"},
        {1475000,"eb87e01504699d9a6857106560b6c61a43c9e8a13ab1997a487e6a457365c7a6"},
        {1480000,"ffac6d02d5fed0979995585ea7681615abc2fbabf0e00a8e3449effac6c21669"},
        {1485000,"d85c1a3acca0bfd36f332ee7170ce31025f4783cc09065fb3c965808afdfdc39"},
        {1490000,"4b059d4e32f142ca93f9c881597c4baecaa9952b98d7da34c7a51de16865c876"},
        {1495000,"0a476efd26a965ec0e2ce33a2aee59cc196e00e25140f7668bb82b31fa932291"},
        {1500000,"93fd60fe4dd8eb7d65c3476de910eca36d73f970a746bfa691c43aefb1725daa"}
};
} // namespace CryptoNote
