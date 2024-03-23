#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ListAliasesResponse)
namespace Amazon::Lambda::Model {
class AliasConfiguration;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Lambda::Model {
class ListAliasesResponse;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Lambda::Model::ListAliasesResponse);
// Type: Amazon.Lambda.Model::ListAliasesResponse
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Lambda::Model {
// Is value type: false
// CS Name: ::Amazon.Lambda.Model::ListAliasesResponse*
class CORDL_TYPE ListAliasesResponse : public ::Amazon::Runtime::AmazonWebServiceResponse {
public:
  // Declarations
  __declspec(property(get = get_Aliases, put = set_Aliases))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>* Aliases;

  __declspec(property(get = get_NextMarker, put = set_NextMarker))::StringW NextMarker;

  /// @brief Field _aliases, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__aliases, put = __cordl_internal_set__aliases))::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>* _aliases;

  /// @brief Field _nextMarker, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextMarker, put = __cordl_internal_set__nextMarker))::StringW _nextMarker;

  /// @brief Method IsSetAliases, addr 0x2bcd3a8, size 0x54, virtual false, abstract: false, final false
  inline bool IsSetAliases();

  /// @brief Method IsSetNextMarker, addr 0x2bcd40c, size 0x10, virtual false, abstract: false, final false
  inline bool IsSetNextMarker();

  static inline ::Amazon::Lambda::Model::ListAliasesResponse* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>*& __cordl_internal_get__aliases();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>*> const& __cordl_internal_get__aliases() const;

  constexpr ::StringW const& __cordl_internal_get__nextMarker() const;

  constexpr ::StringW& __cordl_internal_get__nextMarker();

  constexpr void __cordl_internal_set__aliases(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>* value);

  constexpr void __cordl_internal_set__nextMarker(::StringW value);

  /// @brief Method .ctor, addr 0x2bcd41c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Aliases, addr 0x2bcd398, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>* get_Aliases();

  /// @brief Method get_NextMarker, addr 0x2bcd3fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_NextMarker();

  /// @brief Method set_Aliases, addr 0x2bcd3a0, size 0x8, virtual false, abstract: false, final false
  inline void set_Aliases(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>* value);

  /// @brief Method set_NextMarker, addr 0x2bcd404, size 0x8, virtual false, abstract: false, final false
  inline void set_NextMarker(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListAliasesResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListAliasesResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListAliasesResponse(ListAliasesResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListAliasesResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListAliasesResponse(ListAliasesResponse const&) = delete;

  /// @brief Field _aliases, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::AliasConfiguration*>* ____aliases;

  /// @brief Field _nextMarker, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextMarker;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Lambda::Model::ListAliasesResponse, 0x38>, "Size mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListAliasesResponse, ____aliases) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Amazon::Lambda::Model::ListAliasesResponse, ____nextMarker) == 0x30, "Offset mismatch!");

} // namespace Amazon::Lambda::Model
NEED_NO_BOX(::Amazon::Lambda::Model::ListAliasesResponse);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Lambda::Model::ListAliasesResponse*, "Amazon.Lambda.Model", "ListAliasesResponse");
