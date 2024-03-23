#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ElasticMapReduceActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class ElasticMapReduceActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticMapReduceActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticMapReduceActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::ElasticMapReduceActionIdentifiers*
class CORDL_TYPE ElasticMapReduceActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AddInstanceGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddInstanceGroups, put = setStaticF_AddInstanceGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddInstanceGroups;

  /// @brief Field AddJobFlowSteps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddJobFlowSteps, put = setStaticF_AddJobFlowSteps))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddJobFlowSteps;

  /// @brief Field AddTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AddTags, put = setStaticF_AddTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AddTags;

  /// @brief Field AllElasticMapReduceActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllElasticMapReduceActions,
                             put = setStaticF_AllElasticMapReduceActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllElasticMapReduceActions;

  /// @brief Field DescribeCluster, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeCluster, put = setStaticF_DescribeCluster))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeCluster;

  /// @brief Field DescribeJobFlows, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeJobFlows, put = setStaticF_DescribeJobFlows))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeJobFlows;

  /// @brief Field DescribeStep, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeStep, put = setStaticF_DescribeStep))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeStep;

  /// @brief Field ListBootstrapActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListBootstrapActions, put = setStaticF_ListBootstrapActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListBootstrapActions;

  /// @brief Field ListClusters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListClusters, put = setStaticF_ListClusters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListClusters;

  /// @brief Field ListInstanceGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListInstanceGroups, put = setStaticF_ListInstanceGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListInstanceGroups;

  /// @brief Field ListInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListInstances, put = setStaticF_ListInstances))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListInstances;

  /// @brief Field ListSteps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListSteps, put = setStaticF_ListSteps))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListSteps;

  /// @brief Field ModifyInstanceGroups, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ModifyInstanceGroups, put = setStaticF_ModifyInstanceGroups))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ModifyInstanceGroups;

  /// @brief Field RemoveTags, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RemoveTags, put = setStaticF_RemoveTags))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RemoveTags;

  /// @brief Field RunJobFlow, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RunJobFlow, put = setStaticF_RunJobFlow))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* RunJobFlow;

  /// @brief Field SetTerminationProtection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SetTerminationProtection, put = setStaticF_SetTerminationProtection))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* SetTerminationProtection;

  /// @brief Field TerminateJobFlows, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TerminateJobFlows, put = setStaticF_TerminateJobFlows))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* TerminateJobFlows;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddInstanceGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddJobFlowSteps();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AddTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllElasticMapReduceActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeCluster();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeJobFlows();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeStep();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListBootstrapActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListClusters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListInstanceGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListInstances();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListSteps();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ModifyInstanceGroups();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RemoveTags();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_RunJobFlow();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_SetTerminationProtection();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_TerminateJobFlows();

  static inline void setStaticF_AddInstanceGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddJobFlowSteps(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AddTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_AllElasticMapReduceActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeCluster(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeJobFlows(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeStep(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListBootstrapActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListClusters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListInstanceGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListInstances(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListSteps(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ModifyInstanceGroups(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RemoveTags(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_RunJobFlow(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_SetTerminationProtection(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_TerminateJobFlows(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElasticMapReduceActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElasticMapReduceActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElasticMapReduceActionIdentifiers(ElasticMapReduceActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElasticMapReduceActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElasticMapReduceActionIdentifiers(ElasticMapReduceActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticMapReduceActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticMapReduceActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::ElasticMapReduceActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers",
                       "ElasticMapReduceActionIdentifiers");
