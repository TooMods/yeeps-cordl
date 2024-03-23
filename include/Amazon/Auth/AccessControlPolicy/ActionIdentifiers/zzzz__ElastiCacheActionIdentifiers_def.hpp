#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ElastiCacheActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ElastiCacheActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElastiCacheActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElastiCacheActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElastiCacheActionIdentifiers*
class CORDL_TYPE ElastiCacheActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllElastiCacheActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllElastiCacheActions, put = setStaticF_AllElastiCacheActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllElastiCacheActions;

  /// @brief Field AuthorizeCacheSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AuthorizeCacheSecurityGroupIngress,
                             put = setStaticF_AuthorizeCacheSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AuthorizeCacheSecurityGroupIngress;

  /// @brief Field CreateCacheCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCacheCluster, put = setStaticF_CreateCacheCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCacheCluster;

  /// @brief Field CreateCacheParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCacheParameterGroup, put = setStaticF_CreateCacheParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCacheParameterGroup;

  /// @brief Field CreateCacheSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateCacheSecurityGroup, put = setStaticF_CreateCacheSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateCacheSecurityGroup;

  /// @brief Field DeleteCacheCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteCacheCluster, put = setStaticF_DeleteCacheCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteCacheCluster;

  /// @brief Field DeleteCacheParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteCacheParameterGroup, put = setStaticF_DeleteCacheParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteCacheParameterGroup;

  /// @brief Field DeleteCacheSecurityGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteCacheSecurityGroup, put = setStaticF_DeleteCacheSecurityGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteCacheSecurityGroup;

  /// @brief Field DescribeCacheClusters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCacheClusters, put = setStaticF_DescribeCacheClusters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCacheClusters;

  /// @brief Field DescribeCacheParameterGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCacheParameterGroups,
                             put = setStaticF_DescribeCacheParameterGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCacheParameterGroups;

  /// @brief Field DescribeCacheParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCacheParameters, put = setStaticF_DescribeCacheParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCacheParameters;

  /// @brief Field DescribeCacheSecurityGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCacheSecurityGroups,
                             put = setStaticF_DescribeCacheSecurityGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCacheSecurityGroups;

  /// @brief Field DescribeEngineDefaultParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEngineDefaultParameters,
                             put = setStaticF_DescribeEngineDefaultParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEngineDefaultParameters;

  /// @brief Field DescribeEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeEvents, put = setStaticF_DescribeEvents))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeEvents;

  /// @brief Field ModifyCacheCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyCacheCluster, put = setStaticF_ModifyCacheCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyCacheCluster;

  /// @brief Field ModifyCacheParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyCacheParameterGroup, put = setStaticF_ModifyCacheParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyCacheParameterGroup;

  /// @brief Field RebootCacheCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RebootCacheCluster, put = setStaticF_RebootCacheCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RebootCacheCluster;

  /// @brief Field ResetCacheParameterGroup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ResetCacheParameterGroup, put = setStaticF_ResetCacheParameterGroup))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ResetCacheParameterGroup;

  /// @brief Field RevokeCacheSecurityGroupIngress, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RevokeCacheSecurityGroupIngress,
                             put = setStaticF_RevokeCacheSecurityGroupIngress))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RevokeCacheSecurityGroupIngress;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllElastiCacheActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AuthorizeCacheSecurityGroupIngress();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCacheCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCacheParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateCacheSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteCacheCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteCacheParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteCacheSecurityGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCacheClusters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCacheParameterGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCacheParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCacheSecurityGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEngineDefaultParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeEvents();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyCacheCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyCacheParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RebootCacheCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ResetCacheParameterGroup();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RevokeCacheSecurityGroupIngress();

  static inline void setStaticF_AllElastiCacheActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AuthorizeCacheSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCacheCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCacheParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateCacheSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteCacheCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteCacheParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteCacheSecurityGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCacheClusters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCacheParameterGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCacheParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCacheSecurityGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEngineDefaultParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeEvents(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyCacheCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyCacheParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RebootCacheCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ResetCacheParameterGroup(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RevokeCacheSecurityGroupIngress(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElastiCacheActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElastiCacheActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElastiCacheActionIdentifiers(ElastiCacheActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElastiCacheActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElastiCacheActionIdentifiers(ElastiCacheActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElastiCacheActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElastiCacheActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElastiCacheActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "ElastiCacheActionIdentifiers");
