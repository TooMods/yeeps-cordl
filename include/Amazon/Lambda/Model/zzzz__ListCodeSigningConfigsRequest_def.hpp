#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListCodeSigningConfigsRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListCodeSigningConfigsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest);
// Type: Amazon.Lambda.Model::ListCodeSigningConfigsRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListCodeSigningConfigsRequest*
class CORDL_TYPE ListCodeSigningConfigsRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_Marker, put = set_Marker))::StringW Marker;

  __declspec(property(get = get_MaxItems, put = set_MaxItems)) int32_t MaxItems;

  /// @brief Field _marker, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__marker, put = __cordl_internal_set__marker))::StringW _marker;

  /// @brief Field _maxItems, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__maxItems, put = __cordl_internal_set__maxItems))::System::Nullable_1<int32_t> _maxItems;

  /// @brief Method IsSetMarker, addr 0x2bcd4a8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMarker();

  /// @brief Method IsSetMaxItems, addr 0x2bcd55c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaxItems();

  static inline ::Amazon::Lambda::Model::ListCodeSigningConfigsRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__marker() const;

  constexpr ::StringW& __cordl_internal_get__marker();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxItems() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxItems();

  constexpr void __cordl_internal_set__marker(::StringW value);

  constexpr void __cordl_internal_set__maxItems(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bcd598, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Marker, addr 0x2bcd498, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Marker();

  /// @brief Method get_MaxItems, addr 0x2bcd4b8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaxItems();

  /// @brief Method set_Marker, addr 0x2bcd4a0, size 0x8, virtual false, abstract: false, final false
  inline void set_Marker(::StringW value);

  /// @brief Method set_MaxItems, addr 0x2bcd4f4, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxItems(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListCodeSigningConfigsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListCodeSigningConfigsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListCodeSigningConfigsRequest(ListCodeSigningConfigsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListCodeSigningConfigsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListCodeSigningConfigsRequest(ListCodeSigningConfigsRequest const&) = delete;

  /// @brief Field _marker, offset: 0x38, size: 0x8, def value: None
  ::StringW ____marker;

  /// @brief Field _maxItems, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListCodeSigningConfigsRequest, 0x48>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest, ____marker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest, ____maxItems) == 0x40, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListCodeSigningConfigsRequest*, "Amazon.Lambda.Model", "ListCodeSigningConfigsRequest");
