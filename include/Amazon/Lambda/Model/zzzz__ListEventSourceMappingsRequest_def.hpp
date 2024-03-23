#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListEventSourceMappingsRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListEventSourceMappingsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListEventSourceMappingsRequest);
// Type: Amazon.Lambda.Model::ListEventSourceMappingsRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListEventSourceMappingsRequest*
class CORDL_TYPE ListEventSourceMappingsRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_EventSourceArn, put = set_EventSourceArn))::StringW EventSourceArn;

  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Marker, put = set_Marker))::StringW Marker;

  __declspec(property(get = get_MaxItems, put = set_MaxItems)) int32_t MaxItems;

  /// @brief Field _eventSourceArn, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__eventSourceArn, put = __cordl_internal_set__eventSourceArn))::StringW _eventSourceArn;

  /// @brief Field _functionName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _marker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__marker, put = __cordl_internal_set__marker))::StringW _marker;

  /// @brief Field _maxItems, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__maxItems, put = __cordl_internal_set__maxItems))::System::Nullable_1<int32_t> _maxItems;

  /// @brief Method IsSetEventSourceArn, addr 0x2bcd6b0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetEventSourceArn();

  /// @brief Method IsSetFunctionName, addr 0x2bcd6d0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetMarker, addr 0x2bcd6f0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMarker();

  /// @brief Method IsSetMaxItems, addr 0x2bcd7a4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaxItems();

  static inline ::Amazon::Lambda::Model::ListEventSourceMappingsRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__eventSourceArn() const;

  constexpr ::StringW& __cordl_internal_get__eventSourceArn();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__marker() const;

  constexpr ::StringW& __cordl_internal_get__marker();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxItems() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxItems();

  constexpr void __cordl_internal_set__eventSourceArn(::StringW value);

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__marker(::StringW value);

  constexpr void __cordl_internal_set__maxItems(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bcd7e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EventSourceArn, addr 0x2bcd6a0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_EventSourceArn();

  /// @brief Method get_FunctionName, addr 0x2bcd6c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Marker, addr 0x2bcd6e0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Marker();

  /// @brief Method get_MaxItems, addr 0x2bcd700, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaxItems();

  /// @brief Method set_EventSourceArn, addr 0x2bcd6a8, size 0x8, virtual false, abstract: false, final false
  inline void set_EventSourceArn(::StringW value);

  /// @brief Method set_FunctionName, addr 0x2bcd6c8, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Marker, addr 0x2bcd6e8, size 0x8, virtual false, abstract: false, final false
  inline void set_Marker(::StringW value);

  /// @brief Method set_MaxItems, addr 0x2bcd73c, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxItems(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListEventSourceMappingsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListEventSourceMappingsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListEventSourceMappingsRequest(ListEventSourceMappingsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListEventSourceMappingsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListEventSourceMappingsRequest(ListEventSourceMappingsRequest const&) = delete;

  /// @brief Field _eventSourceArn, offset: 0x38, size: 0x8, def value: None
  ::StringW ____eventSourceArn;

  /// @brief Field _functionName, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _marker, offset: 0x48, size: 0x8, def value: None
  ::StringW ____marker;

  /// @brief Field _maxItems, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListEventSourceMappingsRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListEventSourceMappingsRequest, ____eventSourceArn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListEventSourceMappingsRequest, ____functionName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListEventSourceMappingsRequest, ____marker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListEventSourceMappingsRequest, ____maxItems) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListEventSourceMappingsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListEventSourceMappingsRequest*, "Amazon.Lambda.Model", "ListEventSourceMappingsRequest");
