#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Vivox/Mint/zzzz__Response_def.hpp"
CORDL_MODULE_EXPORT(Response_1)
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint {
template <typename T> class Response_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::Response_1);
// Type: Unity.Services.Vivox.Mint::Response`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint::Response`1<T>*
class CORDL_TYPE Response_1 : public ::Unity::Services::Vivox::Mint::Response {
public:
  // Declarations
  __declspec(property(get = get_Result)) T Result;

  /// @brief Field <Result>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Result_k__BackingField, put = __cordl_internal_set__Result_k__BackingField)) T _Result_k__BackingField;

  static inline ::Unity::Services::Vivox::Mint::Response_1<T>* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpResponse, T result);

  constexpr T const& __cordl_internal_get__Result_k__BackingField() const;

  constexpr T& __cordl_internal_get__Result_k__BackingField();

  constexpr void __cordl_internal_set__Result_k__BackingField(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* httpResponse, T result);

  /// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Result();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Response_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Response_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Response_1(Response_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Response_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Response_1(Response_1 const&) = delete;

  /// @brief Field <Result>k__BackingField, offset: 0x20, size: 0x8, def value: None
  T ____Result_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::Response_1, "Unity.Services.Vivox.Mint", "Response`1");
