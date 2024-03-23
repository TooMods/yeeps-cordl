#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CloudSearchActionIdentifiers)
namespace Amazon::Auth::AccessControlPolicy {
class ActionIdentifier;
}
// Forward declare root types
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
class CloudSearchActionIdentifiers;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudSearchActionIdentifiers);
// Type: Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudSearchActionIdentifiers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers {
// Is value type: false
// CS Name: ::Amazon.Auth.AccessControlPolicy.ActionIdentifiers::CloudSearchActionIdentifiers*
class CORDL_TYPE CloudSearchActionIdentifiers : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllCloudSearchActions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AllCloudSearchActions, put = setStaticF_AllCloudSearchActions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* AllCloudSearchActions;

  /// @brief Field BuildSuggesters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BuildSuggesters, put = setStaticF_BuildSuggesters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* BuildSuggesters;

  /// @brief Field CreateDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CreateDomain, put = setStaticF_CreateDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* CreateDomain;

  /// @brief Field DefineAnalysisScheme, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefineAnalysisScheme, put = setStaticF_DefineAnalysisScheme))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DefineAnalysisScheme;

  /// @brief Field DefineExpression, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefineExpression, put = setStaticF_DefineExpression))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DefineExpression;

  /// @brief Field DefineIndexField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefineIndexField, put = setStaticF_DefineIndexField))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DefineIndexField;

  /// @brief Field DefineSuggester, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefineSuggester, put = setStaticF_DefineSuggester))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DefineSuggester;

  /// @brief Field DeleteAnalysisScheme, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteAnalysisScheme, put = setStaticF_DeleteAnalysisScheme))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteAnalysisScheme;

  /// @brief Field DeleteDomain, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteDomain, put = setStaticF_DeleteDomain))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteDomain;

  /// @brief Field DeleteExpression, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteExpression, put = setStaticF_DeleteExpression))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteExpression;

  /// @brief Field DeleteIndexField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteIndexField, put = setStaticF_DeleteIndexField))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteIndexField;

  /// @brief Field DeleteSuggester, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DeleteSuggester, put = setStaticF_DeleteSuggester))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DeleteSuggester;

  /// @brief Field DescribeAnalysisSchemes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAnalysisSchemes, put = setStaticF_DescribeAnalysisSchemes))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAnalysisSchemes;

  /// @brief Field DescribeAvailabilityOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeAvailabilityOptions,
                             put = setStaticF_DescribeAvailabilityOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeAvailabilityOptions;

  /// @brief Field DescribeDomains, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeDomains, put = setStaticF_DescribeDomains))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeDomains;

  /// @brief Field DescribeExpressions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeExpressions, put = setStaticF_DescribeExpressions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeExpressions;

  /// @brief Field DescribeIndexFields, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeIndexFields, put = setStaticF_DescribeIndexFields))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeIndexFields;

  /// @brief Field DescribeScalingParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeScalingParameters, put = setStaticF_DescribeScalingParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeScalingParameters;

  /// @brief Field DescribeServiceAccessPolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeServiceAccessPolicies,
                             put = setStaticF_DescribeServiceAccessPolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeServiceAccessPolicies;

  /// @brief Field DescribeSuggesters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DescribeSuggesters, put = setStaticF_DescribeSuggesters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* DescribeSuggesters;

  /// @brief Field IndexDocuments, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IndexDocuments, put = setStaticF_IndexDocuments))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* IndexDocuments;

  /// @brief Field ListDomainNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ListDomainNames, put = setStaticF_ListDomainNames))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* ListDomainNames;

  /// @brief Field UpdateAvailabilityOptions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateAvailabilityOptions, put = setStaticF_UpdateAvailabilityOptions))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateAvailabilityOptions;

  /// @brief Field UpdateScalingParameters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateScalingParameters, put = setStaticF_UpdateScalingParameters))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateScalingParameters;

  /// @brief Field UpdateServiceAccessPolicies, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateServiceAccessPolicies,
                             put = setStaticF_UpdateServiceAccessPolicies))::Amazon::Auth::AccessControlPolicy::ActionIdentifier* UpdateServiceAccessPolicies;

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_AllCloudSearchActions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_BuildSuggesters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_CreateDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DefineAnalysisScheme();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DefineExpression();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DefineIndexField();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DefineSuggester();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteAnalysisScheme();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteDomain();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteExpression();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteIndexField();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DeleteSuggester();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAnalysisSchemes();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeAvailabilityOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeDomains();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeExpressions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeIndexFields();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeScalingParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeServiceAccessPolicies();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_DescribeSuggesters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_IndexDocuments();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_ListDomainNames();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateAvailabilityOptions();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateScalingParameters();

  static inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* getStaticF_UpdateServiceAccessPolicies();

  static inline void setStaticF_AllCloudSearchActions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_BuildSuggesters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_CreateDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DefineAnalysisScheme(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DefineExpression(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DefineIndexField(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DefineSuggester(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteAnalysisScheme(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteDomain(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteExpression(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteIndexField(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DeleteSuggester(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAnalysisSchemes(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeAvailabilityOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeDomains(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeExpressions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeIndexFields(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeScalingParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeServiceAccessPolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_DescribeSuggesters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_IndexDocuments(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_ListDomainNames(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateAvailabilityOptions(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateScalingParameters(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

  static inline void setStaticF_UpdateServiceAccessPolicies(::Amazon::Auth::AccessControlPolicy::ActionIdentifier* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudSearchActionIdentifiers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudSearchActionIdentifiers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudSearchActionIdentifiers(CloudSearchActionIdentifiers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudSearchActionIdentifiers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudSearchActionIdentifiers(CloudSearchActionIdentifiers const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudSearchActionIdentifiers, 0x10>, "Size mismatch!");

} // namespace Amazon::Auth::AccessControlPolicy::ActionIdentifiers
NEED_NO_BOX(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudSearchActionIdentifiers);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Auth::AccessControlPolicy::ActionIdentifiers::CloudSearchActionIdentifiers*, "Amazon.Auth.AccessControlPolicy.ActionIdentifiers", "CloudSearchActionIdentifiers");
