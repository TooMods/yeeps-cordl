#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemHeader)
namespace System {
class Object;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Utilities::IO::Pem {
class PemHeader;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader);
// Type: ThirdParty.BouncyCastle.Utilities.IO.Pem::PemHeader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Utilities.IO.Pem::PemHeader*
class CORDL_TYPE PemHeader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field val, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_val, put = __cordl_internal_set_val))::StringW val;

  /// @brief Method Equals, addr 0x14b66d0, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x14b6650, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHashCode, addr 0x14b66b0, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetHashCode(::StringW s);

  static inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader* New_ctor(::StringW name, ::StringW val);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_val() const;

  constexpr ::StringW& __cordl_internal_get_val();

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_val(::StringW value);

  /// @brief Method .ctor, addr 0x14b6614, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW val);

  /// @brief Method get_Name, addr 0x14b6640, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Value, addr 0x14b6648, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemHeader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemHeader(PemHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemHeader(PemHeader const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field val, offset: 0x18, size: 0x8, def value: None
  ::StringW ___val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader, 0x20>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader, ___val) == 0x18, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemHeader*, "ThirdParty.BouncyCastle.Utilities.IO.Pem", "PemHeader");
