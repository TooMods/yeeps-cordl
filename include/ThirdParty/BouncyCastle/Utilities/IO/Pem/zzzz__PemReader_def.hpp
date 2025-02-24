#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemReader)
namespace System::IO {
class TextReader;
}
namespace ThirdParty::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Utilities::IO::Pem {
class PemReader;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader);
// Type: ThirdParty.BouncyCastle.Utilities.IO.Pem::PemReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Utilities.IO.Pem::PemReader*
class CORDL_TYPE PemReader : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Reader))::System::IO::TextReader* Reader;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::IO::TextReader* reader;

  /// @brief Method LoadObject, addr 0x14b6838, size 0x3a8, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* LoadObject(::StringW type);

  static inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method ReadPemObject, addr 0x14b3bec, size 0xd8, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* ReadPemObject();

  constexpr ::System::IO::TextReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __cordl_internal_get_reader() const;

  constexpr void __cordl_internal_set_reader(::System::IO::TextReader* value);

  /// @brief Method .ctor, addr 0x14b3a04, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method get_Reader, addr 0x14b6830, size 0x8, virtual false, abstract: false, final false
  inline ::System::IO::TextReader* get_Reader();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemReader(PemReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemReader(PemReader const&) = delete;

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::IO::TextReader* ___reader;

  /// @brief Field BeginString offset 0xffffffff size 0x8
  static constexpr ::ConstString BeginString{ u"-----BEGIN " };

  /// @brief Field EndString offset 0xffffffff size 0x8
  static constexpr ::ConstString EndString{ u"-----END " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader, ___reader) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemReader*, "ThirdParty.BouncyCastle.Utilities.IO.Pem", "PemReader");
