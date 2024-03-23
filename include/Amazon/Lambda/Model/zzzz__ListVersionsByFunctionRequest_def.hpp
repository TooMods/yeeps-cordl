#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListVersionsByFunctionRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListVersionsByFunctionRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListVersionsByFunctionRequest);
// Type: Amazon.Lambda.Model::ListVersionsByFunctionRequest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListVersionsByFunctionRequest*
class CORDL_TYPE ListVersionsByFunctionRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_Marker, put = set_Marker))::StringW Marker;

  __declspec(property(get = get_MaxItems, put = set_MaxItems)) int32_t MaxItems;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _marker, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__marker, put = __cordl_internal_set__marker))::StringW _marker;

  /// @brief Field _maxItems, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__maxItems, put = __cordl_internal_set__maxItems))::System::Nullable_1<int32_t> _maxItems;

  /// @brief Method IsSetFunctionName, addr 0x2bce81c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetMarker, addr 0x2bce83c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMarker();

  /// @brief Method IsSetMaxItems, addr 0x2bce8f0, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaxItems();

  static inline ::Amazon::Lambda::Model::ListVersionsByFunctionRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__marker() const;

  constexpr ::StringW& __cordl_internal_get__marker();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxItems() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxItems();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__marker(::StringW value);

  constexpr void __cordl_internal_set__maxItems(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bce92c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x2bce80c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_Marker, addr 0x2bce82c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Marker();

  /// @brief Method get_MaxItems, addr 0x2bce84c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaxItems();

  /// @brief Method set_FunctionName, addr 0x2bce814, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_Marker, addr 0x2bce834, size 0x8, virtual false, abstract: false, final false
  inline void set_Marker(::StringW value);

  /// @brief Method set_MaxItems, addr 0x2bce888, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxItems(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListVersionsByFunctionRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListVersionsByFunctionRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListVersionsByFunctionRequest(ListVersionsByFunctionRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListVersionsByFunctionRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListVersionsByFunctionRequest(ListVersionsByFunctionRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _marker, offset: 0x40, size: 0x8, def value: None
  ::StringW ____marker;

  /// @brief Field _maxItems, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListVersionsByFunctionRequest, 0x50>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionRequest, ____marker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListVersionsByFunctionRequest, ____maxItems) == 0x48, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListVersionsByFunctionRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListVersionsByFunctionRequest*, "Amazon.Lambda.Model", "ListVersionsByFunctionRequest");
