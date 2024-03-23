#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Response)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint {
class Response;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::Mint::Response);
// Type: Unity.Services.Vivox.Mint::Response
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint {
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint::Response*
class CORDL_TYPE Response : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Headers))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Headers;

  __declspec(property(get = get_Status, put = set_Status)) int64_t Status;

  /// @brief Field <Headers>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Headers_k__BackingField,
                      put = __cordl_internal_set__Headers_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _Headers_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField, put = __cordl_internal_set__Status_k__BackingField)) int64_t _Status_k__BackingField;

  static inline ::Unity::Services::Vivox::Mint::Response* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpResponse);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__Headers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__Headers_k__BackingField() const;

  constexpr int64_t const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr int64_t& __cordl_internal_get__Status_k__BackingField();

  constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__Status_k__BackingField(int64_t value);

  /// @brief Method .ctor, addr 0x17013a4, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpResponse);

  /// @brief Method get_Headers, addr 0x170138c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* get_Headers();

  /// @brief Method get_Status, addr 0x1701394, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_Status();

  /// @brief Method set_Status, addr 0x170139c, size 0x8, virtual false, abstract: false, final false
  inline void set_Status(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Response();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Response", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Response(Response&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Response", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Response(Response const&) = delete;

  /// @brief Field <Headers>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____Headers_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset: 0x18, size: 0x8, def value: None
  int64_t ____Status_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::Mint::Response, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Response, ____Headers_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::Mint::Response, ____Status_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Vivox::Mint
NEED_NO_BOX(::Unity::Services::Vivox::Mint::Response);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::Mint::Response*, "Unity.Services.Vivox.Mint", "Response");
