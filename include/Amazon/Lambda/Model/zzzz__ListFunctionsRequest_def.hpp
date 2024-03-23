#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListFunctionsRequest)
namespace Amazon::Lambda {
class FunctionVersion;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListFunctionsRequest;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListFunctionsRequest);
// Type: Amazon.Lambda.Model::ListFunctionsRequest
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListFunctionsRequest*
class CORDL_TYPE ListFunctionsRequest : public ::Amazon::Lambda::AmazonLambdaRequest {
public:
  // Declarations
  __declspec(property(get = get_FunctionVersion, put = set_FunctionVersion))::Amazon::Lambda::FunctionVersion* FunctionVersion;

  __declspec(property(get = get_Marker, put = set_Marker))::StringW Marker;

  __declspec(property(get = get_MasterRegion, put = set_MasterRegion))::StringW MasterRegion;

  __declspec(property(get = get_MaxItems, put = set_MaxItems)) int32_t MaxItems;

  /// @brief Field _functionVersion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__functionVersion, put = __cordl_internal_set__functionVersion))::Amazon::Lambda::FunctionVersion* _functionVersion;

  /// @brief Field _marker, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__marker, put = __cordl_internal_set__marker))::StringW _marker;

  /// @brief Field _masterRegion, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__masterRegion, put = __cordl_internal_set__masterRegion))::StringW _masterRegion;

  /// @brief Field _maxItems, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__maxItems, put = __cordl_internal_set__maxItems))::System::Nullable_1<int32_t> _maxItems;

  /// @brief Method IsSetFunctionVersion, addr 0x2bcdd48, size 0x60, virtual false, abstract: false, final false
  inline bool IsSetFunctionVersion();

  /// @brief Method IsSetMarker, addr 0x2bcddb8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMarker();

  /// @brief Method IsSetMasterRegion, addr 0x2bcddd8, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetMasterRegion();

  /// @brief Method IsSetMaxItems, addr 0x2bcde8c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSetMaxItems();

  static inline ::Amazon::Lambda::Model::ListFunctionsRequest* New_ctor();

  constexpr ::Amazon::Lambda::FunctionVersion*& __cordl_internal_get__functionVersion();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::FunctionVersion*> const& __cordl_internal_get__functionVersion() const;

  constexpr ::StringW const& __cordl_internal_get__marker() const;

  constexpr ::StringW& __cordl_internal_get__marker();

  constexpr ::StringW const& __cordl_internal_get__masterRegion() const;

  constexpr ::StringW& __cordl_internal_get__masterRegion();

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__maxItems() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__maxItems();

  constexpr void __cordl_internal_set__functionVersion(::Amazon::Lambda::FunctionVersion* value);

  constexpr void __cordl_internal_set__marker(::StringW value);

  constexpr void __cordl_internal_set__masterRegion(::StringW value);

  constexpr void __cordl_internal_set__maxItems(::System::Nullable_1<int32_t> value);

  /// @brief Method .ctor, addr 0x2bbea3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_FunctionVersion, addr 0x2bcdd38, size 0x8, virtual false, abstract: false, final false
  inline ::Amazon::Lambda::FunctionVersion* get_FunctionVersion();

  /// @brief Method get_Marker, addr 0x2bcdda8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Marker();

  /// @brief Method get_MasterRegion, addr 0x2bcddc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MasterRegion();

  /// @brief Method get_MaxItems, addr 0x2bcdde8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_MaxItems();

  /// @brief Method set_FunctionVersion, addr 0x2bcdd40, size 0x8, virtual false, abstract: false, final false
  inline void set_FunctionVersion(::Amazon::Lambda::FunctionVersion* value);

  /// @brief Method set_Marker, addr 0x2bcddb0, size 0x8, virtual false, abstract: false, final false
  inline void set_Marker(::StringW value);

  /// @brief Method set_MasterRegion, addr 0x2bcddd0, size 0x8, virtual false, abstract: false, final false
  inline void set_MasterRegion(::StringW value);

  /// @brief Method set_MaxItems, addr 0x2bcde24, size 0x68, virtual false, abstract: false, final false
  inline void set_MaxItems(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListFunctionsRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListFunctionsRequest(ListFunctionsRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListFunctionsRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListFunctionsRequest(ListFunctionsRequest const&) = delete;

  /// @brief Field _functionVersion, offset: 0x38, size: 0x8, def value: None
  ::Amazon::Lambda::FunctionVersion* ____functionVersion;

  /// @brief Field _marker, offset: 0x40, size: 0x8, def value: None
  ::StringW ____marker;

  /// @brief Field _masterRegion, offset: 0x48, size: 0x8, def value: None
  ::StringW ____masterRegion;

  /// @brief Field _maxItems, offset: 0x50, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____maxItems;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListFunctionsRequest, 0x58>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsRequest, ____functionVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsRequest, ____marker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsRequest, ____masterRegion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListFunctionsRequest, ____maxItems) == 0x50, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListFunctionsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListFunctionsRequest*, "Amazon.Lambda.Model", "ListFunctionsRequest");
