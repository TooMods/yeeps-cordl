#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListAliasesRequest)
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListAliasesRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListAliasesRequest);
// Type: Amazon.Lambda.Model::ListAliasesRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListAliasesRequest*
class CORDL_TYPE ListAliasesRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionName, put = set_FunctionName))::StringW FunctionName;

  __declspec(property(get = get_FunctionVersion, put = set_FunctionVersion))::StringW FunctionVersion;

  __declspec(property(get = get_Marker, put = set_Marker))::StringW Marker;

  __declspec(property(get = get_MaxItems, put = set_MaxItems)) int32_t MaxItems;

  /// @brief Field _functionName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionName, put = __cordl_internal_set__functionName))::StringW _functionName;

  /// @brief Field _functionVersion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__functionVersion, put = __cordl_internal_set__functionVersion))::StringW _functionVersion;

  /// @brief Field _marker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__marker, put = __cordl_internal_set__marker))::StringW _marker;

  /// @brief Field _maxItems, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__maxItems, put = __cordl_internal_set__maxItems))::System::Nullable_1<int32_t> _maxItems;

  /// @brief Method IsSetFunctionName, addr 0x2bcd260, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionName();

  /// @brief Method IsSetFunctionVersion, addr 0x2bcd280, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetFunctionVersion();

  /// @brief Method IsSetMarker, addr 0x2bcd2a0, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMarker();

  /// @brief Method IsSetMaxItems, addr 0x2bcd354, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaxItems();

  static inline ::Amazon::Lambda::Model::ListAliasesRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__functionName() const;

  constexpr ::StringW& __cordl_internal_get__functionName();

  constexpr ::StringW const& __cordl_internal_get__functionVersion() const;

  constexpr ::StringW& __cordl_internal_get__functionVersion();

  constexpr ::StringW const& __cordl_internal_get__marker() const;

  constexpr ::StringW& __cordl_internal_get__marker();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxItems() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxItems();

  constexpr void __cordl_internal_set__functionName(::StringW value);

  constexpr void __cordl_internal_set__functionVersion(::StringW value);

  constexpr void __cordl_internal_set__marker(::StringW value);

  constexpr void __cordl_internal_set__maxItems(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bcd390, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionName, addr 0x2bcd250, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionName();

  /// @brief Method get_FunctionVersion, addr 0x2bcd270, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FunctionVersion();

  /// @brief Method get_Marker, addr 0x2bcd290, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Marker();

  /// @brief Method get_MaxItems, addr 0x2bcd2b0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaxItems();

  /// @brief Method set_FunctionName, addr 0x2bcd258, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionName(::StringW value);

  /// @brief Method set_FunctionVersion, addr 0x2bcd278, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionVersion(::StringW value);

  /// @brief Method set_Marker, addr 0x2bcd298, size 0x8, virtual false, abstract: false, final false
  inline void set_Marker(::StringW value);

  /// @brief Method set_MaxItems, addr 0x2bcd2ec, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxItems(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListAliasesRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListAliasesRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListAliasesRequest(ListAliasesRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListAliasesRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListAliasesRequest(ListAliasesRequest const&) = delete;

  /// @brief Field _functionName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____functionName;

  /// @brief Field _functionVersion, offset: 0x40, size: 0x8, def value: None
  ::StringW ____functionVersion;

  /// @brief Field _marker, offset: 0x48, size: 0x8, def value: None
  ::StringW ____marker;

  /// @brief Field _maxItems, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListAliasesRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListAliasesRequest, ____functionName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListAliasesRequest, ____functionVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListAliasesRequest, ____marker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListAliasesRequest, ____maxItems) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListAliasesRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListAliasesRequest*, "Amazon.Lambda.Model", "ListAliasesRequest");
