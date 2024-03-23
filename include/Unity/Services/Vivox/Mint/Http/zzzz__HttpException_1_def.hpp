#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Vivox/Mint/Http/zzzz__HttpException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HttpException_1)
namespace System {
class Exception;
}
namespace Unity::Services::Vivox::Mint::Http {
class HttpClientResponse;
}
// Forward declare root types
namespace Unity::Services::Vivox::Mint::Http {
template <typename T> class HttpException_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Services::Vivox::Mint::Http::HttpException_1);
// Type: Unity.Services.Vivox.Mint.Http::HttpException`1
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox::Mint::Http {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.Services.Vivox.Mint.Http::HttpException`1<T>*
class CORDL_TYPE HttpException_1 : public ::Unity::Services::Vivox::Mint::Http::HttpException {
public:
  // Declarations
  /// @brief Field ActualError, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_ActualError, put = __cordl_internal_set_ActualError)) T ActualError;

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* New_ctor();

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* New_ctor(::StringW message);

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* New_ctor(::StringW message, ::System::Exception* inner);

  static inline ::Unity::Services::Vivox::Mint::Http::HttpException_1<T>* New_ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, T actualError);

  constexpr T const& __cordl_internal_get_ActualError() const;

  constexpr T& __cordl_internal_get_ActualError();

  constexpr void __cordl_internal_set_ActualError(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Services::Vivox::Mint::Http::HttpClientResponse* response, T actualError);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpException_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpException_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpException_1(HttpException_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpException_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpException_1(HttpException_1 const&) = delete;

  /// @brief Field ActualError, offset: 0x98, size: 0x8, def value: None
  T ___ActualError;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Services::Vivox::Mint::Http
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Services::Vivox::Mint::Http::HttpException_1, "Unity.Services.Vivox.Mint.Http", "HttpException`1");
