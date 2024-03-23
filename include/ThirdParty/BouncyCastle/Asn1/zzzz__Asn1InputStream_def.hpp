#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ThirdParty/BouncyCastle/Asn1/Utilities/zzzz__FilterStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1InputStream)
namespace System::IO {
class Stream;
}
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace ThirdParty::BouncyCastle::Asn1 {
class DerSequence;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1InputStream;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::Asn1InputStream);
// Type: ThirdParty.BouncyCastle.Asn1::Asn1InputStream
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::Asn1InputStream*
class CORDL_TYPE Asn1InputStream : public ::ThirdParty::BouncyCastle::Asn1::Utilities::FilterStream {
public:
  // Declarations
  /// @brief Field limit, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_limit, put = __cordl_internal_set_limit)) int32_t limit;

  /// @brief Method BuildDerEncodableVector, addr 0x14b7ae4, size 0x78, virtual true, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector* BuildDerEncodableVector(::System::IO::Stream* dIn);

  /// @brief Method BuildEncodableVector, addr 0x14b7828, size 0x140, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector* BuildEncodableVector();

  /// @brief Method BuildObject, addr 0x14b76b0, size 0xbc, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* BuildObject(int32_t tag, int32_t tagNo, int32_t length);

  /// @brief Method CreateDerSequence, addr 0x14b7b5c, size 0x84, virtual true, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::System::IO::Stream* dIn);

  /// @brief Method CreatePrimitiveDerObject, addr 0x14b776c, size 0xbc, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* CreatePrimitiveDerObject(int32_t tagNo, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method FindLimit, addr 0x14b7524, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t FindLimit(::System::IO::Stream* input);

  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::System::IO::Stream* inputStream);

  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1InputStream* New_ctor(::System::IO::Stream* inputStream, int32_t limit);

  /// @brief Method ReadLength, addr 0x14b7ce0, size 0x1f0, virtual false, abstract: false, final false
  static inline int32_t ReadLength(::System::IO::Stream* s, int32_t limit);

  /// @brief Method ReadObject, addr 0x14b7968, size 0x17c, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ReadObject();

  /// @brief Method ReadTagNumber, addr 0x14b7be0, size 0x100, virtual false, abstract: false, final false
  static inline int32_t ReadTagNumber(::System::IO::Stream* s, int32_t tag);

  constexpr int32_t const& __cordl_internal_get_limit() const;

  constexpr int32_t& __cordl_internal_get_limit();

  constexpr void __cordl_internal_set_limit(int32_t value);

  /// @brief Method .ctor, addr 0x14b7624, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method .ctor, addr 0x14b75c0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x14b75fc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream, int32_t limit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1InputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1InputStream(Asn1InputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1InputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1InputStream(Asn1InputStream const&) = delete;

  /// @brief Field limit, offset: 0x30, size: 0x4, def value: None
  int32_t ___limit;

  /// @brief Field Constructed offset 0xffffffff size 0x4
  static constexpr int32_t Constructed{ static_cast<int32_t>(0x20) };

  /// @brief Field Integer offset 0xffffffff size 0x4
  static constexpr int32_t Integer{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::Asn1InputStream, 0x38>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Asn1::Asn1InputStream, ___limit) == 0x30, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::Asn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::Asn1InputStream*, "ThirdParty.BouncyCastle.Asn1", "Asn1InputStream");
