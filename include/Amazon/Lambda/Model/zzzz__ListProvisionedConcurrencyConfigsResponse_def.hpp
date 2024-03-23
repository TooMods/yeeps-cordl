#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListProvisionedConcurrencyConfigsResponse)
namespace Amazon::Lambda::Model {
class ProvisionedConcurrencyConfigListItem;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListProvisionedConcurrencyConfigsResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse);
// Type: Amazon.Lambda.Model::ListProvisionedConcurrencyConfigsResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListProvisionedConcurrencyConfigsResponse*
class CORDL_TYPE ListProvisionedConcurrencyConfigsResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  __declspec(property(get = get_ProvisionedConcurrencyConfigs,
                      put = set_ProvisionedConcurrencyConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* ProvisionedConcurrencyConfigs;

  /// @brief Field _nextMarker, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Field _provisionedConcurrencyConfigs, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__provisionedConcurrencyConfigs,
      put = __cordl_internal_set__provisionedConcurrencyConfigs))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* _provisionedConcurrencyConfigs;

  /// @brief Method IsSetNextMarker, addr 0x2bce610, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  /// @brief Method IsSetProvisionedConcurrencyConfigs, addr 0x2bce630, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetProvisionedConcurrencyConfigs();

  static inline ::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*& __cordl_internal_get__provisionedConcurrencyConfigs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>*> const&
  __cordl_internal_get__provisionedConcurrencyConfigs() const;

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  constexpr void __cordl_internal_set__provisionedConcurrencyConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* value);

  /// @brief Method .ctor, addr 0x2bce684, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NextMarker, addr 0x2bce600, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method get_ProvisionedConcurrencyConfigs, addr 0x2bce620, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* get_ProvisionedConcurrencyConfigs();

  /// @brief Method set_NextMarker, addr 0x2bce608, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

  /// @brief Method set_ProvisionedConcurrencyConfigs, addr 0x2bce628, size 0x8, virtual false, abstract: false, final false
  inline void set_ProvisionedConcurrencyConfigs(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListProvisionedConcurrencyConfigsResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListProvisionedConcurrencyConfigsResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListProvisionedConcurrencyConfigsResponse(ListProvisionedConcurrencyConfigsResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListProvisionedConcurrencyConfigsResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListProvisionedConcurrencyConfigsResponse(ListProvisionedConcurrencyConfigsResponse const&) = delete;

  /// @brief Field _nextMarker, offset: 0x28, size: 0x8, def value: None
  ::StringW ____nextMarker;

  /// @brief Field _provisionedConcurrencyConfigs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::ProvisionedConcurrencyConfigListItem*>* ____provisionedConcurrencyConfigs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse, ____nextMarker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse, ____provisionedConcurrencyConfigs) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListProvisionedConcurrencyConfigsResponse*, "Amazon.Lambda.Model", "ListProvisionedConcurrencyConfigsResponse");
