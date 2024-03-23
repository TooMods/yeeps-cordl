#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1Sequence)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
}
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace ThirdParty::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::Asn1Sequence);
// Type: ThirdParty.BouncyCastle.Asn1::Asn1Sequence
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::Asn1Sequence*
class CORDL_TYPE Asn1Sequence : public ::ThirdParty::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field seq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq))::System::Collections::IList* seq;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddObject, addr 0x21f0384, size 0xac, virtual false, abstract: false, final false
  inline void AddObject(::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method GetCurrent, addr 0x21f0298, size 0xec, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* GetCurrent(::System::Collections::IEnumerator* e);

  /// @brief Method GetEnumerator, addr 0x21f003c, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetObjectAt, addr 0x21f01dc, size 0xc, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* GetObjectAt(int32_t index);

  /// @brief Method GetObjects, addr 0x21f00dc, size 0xc, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetObjects();

  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1Sequence* New_ctor(int32_t capacity);

  constexpr ::System::Collections::IList*& __cordl_internal_get_seq();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_seq() const;

  constexpr void __cordl_internal_set_seq(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x21f0008, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Count, addr 0x21f01f4, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x21f00e8, size 0xf4, virtual true, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Size, addr 0x21f01e8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1Sequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1Sequence(Asn1Sequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1Sequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1Sequence(Asn1Sequence const&) = delete;

  /// @brief Field seq, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::Asn1Sequence, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Asn1::Asn1Sequence, ___seq) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::Asn1Sequence);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::Asn1Sequence*, "ThirdParty.BouncyCastle.Asn1", "Asn1Sequence");
