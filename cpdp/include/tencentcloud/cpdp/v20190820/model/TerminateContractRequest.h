/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_TERMINATECONTRACTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_TERMINATECONTRACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {

                /**
                * TerminateContract请求参数结构体
                */
                class TerminateContractRequest : public AbstractModel
                {
                public:
                    TerminateContractRequest();
                    ~TerminateContractRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取用户ID，长度不小于5位，仅支持字母和数字的组合
                     * @return UserId 用户ID，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，长度不小于5位，仅支持字母和数字的组合
                     * @param _userId 用户ID，长度不小于5位，仅支持字母和数字的组合
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取指定渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     * @return Channel 指定渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置指定渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     * @param _channel 指定渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取枚举值：
CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE: 按OutContractCode+ContractSceneId解约
CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE：按ChannelContractCode解约
                     * @return TerminateMode 枚举值：
CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE: 按OutContractCode+ContractSceneId解约
CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE：按ChannelContractCode解约
                     * 
                     */
                    std::string GetTerminateMode() const;

                    /**
                     * 设置枚举值：
CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE: 按OutContractCode+ContractSceneId解约
CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE：按ChannelContractCode解约
                     * @param _terminateMode 枚举值：
CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE: 按OutContractCode+ContractSceneId解约
CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE：按ChannelContractCode解约
                     * 
                     */
                    void SetTerminateMode(const std::string& _terminateMode);

                    /**
                     * 判断参数 TerminateMode 是否已赋值
                     * @return TerminateMode 是否已赋值
                     * 
                     */
                    bool TerminateModeHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置聚鑫计费SubAppId，代表子商户
                     * @param _subAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取业务签约合同协议号 当TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填
                     * @return OutContractCode 业务签约合同协议号 当TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填
                     * 
                     */
                    std::string GetOutContractCode() const;

                    /**
                     * 设置业务签约合同协议号 当TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填
                     * @param _outContractCode 业务签约合同协议号 当TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填
                     * 
                     */
                    void SetOutContractCode(const std::string& _outContractCode);

                    /**
                     * 判断参数 OutContractCode 是否已赋值
                     * @return OutContractCode 是否已赋值
                     * 
                     */
                    bool OutContractCodeHasBeenSet() const;

                    /**
                     * 获取签约场景ID，当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填，在米大师侧托管后生成
                     * @return ContractSceneId 签约场景ID，当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填，在米大师侧托管后生成
                     * 
                     */
                    std::string GetContractSceneId() const;

                    /**
                     * 设置签约场景ID，当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填，在米大师侧托管后生成
                     * @param _contractSceneId 签约场景ID，当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填，在米大师侧托管后生成
                     * 
                     */
                    void SetContractSceneId(const std::string& _contractSceneId);

                    /**
                     * 判断参数 ContractSceneId 是否已赋值
                     * @return ContractSceneId 是否已赋值
                     * 
                     */
                    bool ContractSceneIdHasBeenSet() const;

                    /**
                     * 获取米大师生成的协议号 当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE 时 必填
                     * @return ChannelContractCode 米大师生成的协议号 当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE 时 必填
                     * 
                     */
                    std::string GetChannelContractCode() const;

                    /**
                     * 设置米大师生成的协议号 当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE 时 必填
                     * @param _channelContractCode 米大师生成的协议号 当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE 时 必填
                     * 
                     */
                    void SetChannelContractCode(const std::string& _channelContractCode);

                    /**
                     * 判断参数 ChannelContractCode 是否已赋值
                     * @return ChannelContractCode 是否已赋值
                     * 
                     */
                    bool ChannelContractCodeHasBeenSet() const;

                    /**
                     * 获取第三方渠道合约数据，json字符串，与特定渠道有关
                     * @return ExternalContractData 第三方渠道合约数据，json字符串，与特定渠道有关
                     * 
                     */
                    std::string GetExternalContractData() const;

                    /**
                     * 设置第三方渠道合约数据，json字符串，与特定渠道有关
                     * @param _externalContractData 第三方渠道合约数据，json字符串，与特定渠道有关
                     * 
                     */
                    void SetExternalContractData(const std::string& _externalContractData);

                    /**
                     * 判断参数 ExternalContractData 是否已赋值
                     * @return ExternalContractData 是否已赋值
                     * 
                     */
                    bool ExternalContractDataHasBeenSet() const;

                    /**
                     * 获取终止合约原因
                     * @return TerminationReason 终止合约原因
                     * 
                     */
                    std::string GetTerminationReason() const;

                    /**
                     * 设置终止合约原因
                     * @param _terminationReason 终止合约原因
                     * 
                     */
                    void SetTerminationReason(const std::string& _terminationReason);

                    /**
                     * 判断参数 TerminationReason 是否已赋值
                     * @return TerminationReason 是否已赋值
                     * 
                     */
                    bool TerminationReasonHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * @return UserType USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * @param _userType USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取签约方式
                     * @return ContractMethod 签约方式
                     * 
                     */
                    std::string GetContractMethod() const;

                    /**
                     * 设置签约方式
                     * @param _contractMethod 签约方式
                     * 
                     */
                    void SetContractMethod(const std::string& _contractMethod);

                    /**
                     * 判断参数 ContractMethod 是否已赋值
                     * @return ContractMethod 是否已赋值
                     * 
                     */
                    bool ContractMethodHasBeenSet() const;

                    /**
                     * 获取签约代扣穿透查询存量数据迁移模式
                     * @return MigrateMode 签约代扣穿透查询存量数据迁移模式
                     * 
                     */
                    std::string GetMigrateMode() const;

                    /**
                     * 设置签约代扣穿透查询存量数据迁移模式
                     * @param _migrateMode 签约代扣穿透查询存量数据迁移模式
                     * 
                     */
                    void SetMigrateMode(const std::string& _migrateMode);

                    /**
                     * 判断参数 MigrateMode 是否已赋值
                     * @return MigrateMode 是否已赋值
                     * 
                     */
                    bool MigrateModeHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 用户ID，长度不小于5位，仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 指定渠道：  wechat：微信支付  qqwallet：QQ钱包 
 bank：网银支付  只有一个渠道时需要指定
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 枚举值：
CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE: 按OutContractCode+ContractSceneId解约
CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE：按ChannelContractCode解约
                     */
                    std::string m_terminateMode;
                    bool m_terminateModeHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 业务签约合同协议号 当TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填
                     */
                    std::string m_outContractCode;
                    bool m_outContractCodeHasBeenSet;

                    /**
                     * 签约场景ID，当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_OUT_CONTRACT_CODE 时 必填，在米大师侧托管后生成
                     */
                    std::string m_contractSceneId;
                    bool m_contractSceneIdHasBeenSet;

                    /**
                     * 米大师生成的协议号 当 TerminateMode=CONTRACT_TERMINATION_MODE_BY_CHANNEL_CONTRACT_CODE 时 必填
                     */
                    std::string m_channelContractCode;
                    bool m_channelContractCodeHasBeenSet;

                    /**
                     * 第三方渠道合约数据，json字符串，与特定渠道有关
                     */
                    std::string m_externalContractData;
                    bool m_externalContractDataHasBeenSet;

                    /**
                     * 终止合约原因
                     */
                    std::string m_terminationReason;
                    bool m_terminationReasonHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * USER_ID: 用户ID
ANONYMOUS: 匿名类型 USER_ID
默认值为 USER_ID
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 签约方式
                     */
                    std::string m_contractMethod;
                    bool m_contractMethodHasBeenSet;

                    /**
                     * 签约代扣穿透查询存量数据迁移模式
                     */
                    std::string m_migrateMode;
                    bool m_migrateModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_TERMINATECONTRACTREQUEST_H_
