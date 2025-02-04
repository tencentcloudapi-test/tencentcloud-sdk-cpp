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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/ResourceLoc.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 资源详细描述
                */
                class ResourceItem : public AbstractModel
                {
                public:
                    ResourceItem();
                    ~ResourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param ResourceId 资源ID
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return Name 资源名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称
                     * @param Name 资源名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     */
                    uint64_t GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param ResourceType 资源类型
                     */
                    void SetResourceType(const uint64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源位置
                     * @return ResourceLoc 资源位置
                     */
                    ResourceLoc GetResourceLoc() const;

                    /**
                     * 设置资源位置
                     * @param ResourceLoc 资源位置
                     */
                    void SetResourceLoc(const ResourceLoc& _resourceLoc);

                    /**
                     * 判断参数 ResourceLoc 是否已赋值
                     * @return ResourceLoc 是否已赋值
                     */
                    bool ResourceLocHasBeenSet() const;

                    /**
                     * 获取资源地域
                     * @return Region 资源地域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置资源地域
                     * @param Region 资源地域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param AppId 应用ID
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账号Uin
                     * @return OwnerUin 主账号Uin
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号Uin
                     * @param OwnerUin 主账号Uin
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取子账号Uin
                     * @return CreatorUin 子账号Uin
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置子账号Uin
                     * @param CreatorUin 子账号Uin
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取资源创建时间
                     * @return CreateTime 资源创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置资源创建时间
                     * @param CreateTime 资源创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取资源最后更新时间
                     * @return UpdateTime 资源最后更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置资源最后更新时间
                     * @param UpdateTime 资源最后更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取资源的资源版本ID
                     * @return LatestResourceConfigVersion 资源的资源版本ID
                     */
                    int64_t GetLatestResourceConfigVersion() const;

                    /**
                     * 设置资源的资源版本ID
                     * @param LatestResourceConfigVersion 资源的资源版本ID
                     */
                    void SetLatestResourceConfigVersion(const int64_t& _latestResourceConfigVersion);

                    /**
                     * 判断参数 LatestResourceConfigVersion 是否已赋值
                     * @return LatestResourceConfigVersion 是否已赋值
                     */
                    bool LatestResourceConfigVersionHasBeenSet() const;

                    /**
                     * 获取资源备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 资源备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置资源备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 资源备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取版本个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionCount 版本个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVersionCount() const;

                    /**
                     * 设置版本个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VersionCount 版本个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersionCount(const int64_t& _versionCount);

                    /**
                     * 判断参数 VersionCount 是否已赋值
                     * @return VersionCount 是否已赋值
                     */
                    bool VersionCountHasBeenSet() const;

                    /**
                     * 获取关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefJobCount 关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRefJobCount() const;

                    /**
                     * 设置关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RefJobCount 关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRefJobCount(const int64_t& _refJobCount);

                    /**
                     * 判断参数 RefJobCount 是否已赋值
                     * @return RefJobCount 是否已赋值
                     */
                    bool RefJobCountHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 资源类型
                     */
                    uint64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源位置
                     */
                    ResourceLoc m_resourceLoc;
                    bool m_resourceLocHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号Uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 子账号Uin
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 资源创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 资源最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 资源的资源版本ID
                     */
                    int64_t m_latestResourceConfigVersion;
                    bool m_latestResourceConfigVersionHasBeenSet;

                    /**
                     * 资源备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 版本个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_versionCount;
                    bool m_versionCountHasBeenSet;

                    /**
                     * 关联作业数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_refJobCount;
                    bool m_refJobCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_RESOURCEITEM_H_
