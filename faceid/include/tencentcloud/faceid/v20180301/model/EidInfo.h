/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EIDINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Eid出参，包括商户方用户的标识和加密的用户姓名身份证信息。
                */
                class EidInfo : public AbstractModel
                {
                public:
                    EidInfo();
                    ~EidInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户方 appeIDcode 的数字证书
                     * @return EidCode 商户方 appeIDcode 的数字证书
                     */
                    std::string GetEidCode() const;

                    /**
                     * 设置商户方 appeIDcode 的数字证书
                     * @param EidCode 商户方 appeIDcode 的数字证书
                     */
                    void SetEidCode(const std::string& _eidCode);

                    /**
                     * 判断参数 EidCode 是否已赋值
                     * @return EidCode 是否已赋值
                     */
                    bool EidCodeHasBeenSet() const;

                    /**
                     * 获取Eid中心针对商户方EidCode的电子签名
                     * @return EidSign Eid中心针对商户方EidCode的电子签名
                     */
                    std::string GetEidSign() const;

                    /**
                     * 设置Eid中心针对商户方EidCode的电子签名
                     * @param EidSign Eid中心针对商户方EidCode的电子签名
                     */
                    void SetEidSign(const std::string& _eidSign);

                    /**
                     * 判断参数 EidSign 是否已赋值
                     * @return EidSign 是否已赋值
                     */
                    bool EidSignHasBeenSet() const;

                    /**
                     * 获取商户方公钥加密的会话密钥的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     * @return DesKey 商户方公钥加密的会话密钥的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     */
                    std::string GetDesKey() const;

                    /**
                     * 设置商户方公钥加密的会话密钥的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     * @param DesKey 商户方公钥加密的会话密钥的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     */
                    void SetDesKey(const std::string& _desKey);

                    /**
                     * 判断参数 DesKey 是否已赋值
                     * @return DesKey 是否已赋值
                     */
                    bool DesKeyHasBeenSet() const;

                    /**
                     * 获取会话密钥sm2加密后的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     * @return UserInfo 会话密钥sm2加密后的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     */
                    std::string GetUserInfo() const;

                    /**
                     * 设置会话密钥sm2加密后的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     * @param UserInfo 会话密钥sm2加密后的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     */
                    void SetUserInfo(const std::string& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     */
                    bool UserInfoHasBeenSet() const;

                private:

                    /**
                     * 商户方 appeIDcode 的数字证书
                     */
                    std::string m_eidCode;
                    bool m_eidCodeHasBeenSet;

                    /**
                     * Eid中心针对商户方EidCode的电子签名
                     */
                    std::string m_eidSign;
                    bool m_eidSignHasBeenSet;

                    /**
                     * 商户方公钥加密的会话密钥的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     */
                    std::string m_desKey;
                    bool m_desKeyHasBeenSet;

                    /**
                     * 会话密钥sm2加密后的base64字符串，[指引详见](https://cloud.tencent.com/document/product/1007/63370)
                     */
                    std::string m_userInfo;
                    bool m_userInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EIDINFO_H_
