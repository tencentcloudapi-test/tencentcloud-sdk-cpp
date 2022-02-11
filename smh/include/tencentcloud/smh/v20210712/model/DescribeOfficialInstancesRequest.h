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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALINSTANCESREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeOfficialInstances请求参数结构体
                */
                class DescribeOfficialInstancesRequest : public AbstractModel
                {
                public:
                    DescribeOfficialInstancesRequest();
                    ~DescribeOfficialInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否查询实例绑定的超级管理员账号，默认值为 false。
                     * @return SuperAdminAccount 是否查询实例绑定的超级管理员账号，默认值为 false。
                     */
                    bool GetSuperAdminAccount() const;

                    /**
                     * 设置是否查询实例绑定的超级管理员账号，默认值为 false。
                     * @param SuperAdminAccount 是否查询实例绑定的超级管理员账号，默认值为 false。
                     */
                    void SetSuperAdminAccount(const bool& _superAdminAccount);

                    /**
                     * 判断参数 SuperAdminAccount 是否已赋值
                     * @return SuperAdminAccount 是否已赋值
                     */
                    bool SuperAdminAccountHasBeenSet() const;

                    /**
                     * 获取按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     * @return InstanceIds 按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     * @param InstanceIds 按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取页码，整型，配合 PageSize 使用，默认值为 1。
                     * @return PageNumber 页码，整型，配合 PageSize 使用，默认值为 1。
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，整型，配合 PageSize 使用，默认值为 1。
                     * @param PageNumber 页码，整型，配合 PageSize 使用，默认值为 1。
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * @return PageSize 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     * @param PageSize 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 是否查询实例绑定的超级管理员账号，默认值为 false。
                     */
                    bool m_superAdminAccount;
                    bool m_superAdminAccountHasBeenSet;

                    /**
                     * 按照一个或者多个实例 ID 查询，每次请求的上限为 100 个。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 页码，整型，配合 PageSize 使用，默认值为 1。
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目，整型，配合 PageNumber 使用，默认值为 20，最大值为 100。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEOFFICIALINSTANCESREQUEST_H_
