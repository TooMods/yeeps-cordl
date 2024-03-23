#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1EncodableVector)
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
class Asn1EncodableVector;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector);
// Type: ThirdParty.BouncyCastle.Asn1::Asn1EncodableVector
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace ThirdParty::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::ThirdParty.BouncyCastle.Asn1::Asn1EncodableVector*
class CORDL_TYPE Asn1EncodableVector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item))::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* Item[];

  __declspec(property(get = get_Size)) int32_t Size;

  /// @brief Field v, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_v, put = __cordl_internal_set_v))::System::Collections::IList* v;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x14b7048, size 0xfc, virtual false, abstract: false, final false
  inline void Add(::ArrayW<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>*> objs);

  /// @brief Method AddOptional, addr 0x14b7144, size 0x100, virtual false, abstract: false, final false
  inline void AddOptional(::ArrayW<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>*> objs);

  /// @brief Method FromEnumerable, addr 0x14b6be8, size 0x428, virtual false, abstract: false, final false
  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector* FromEnumerable(::System::Collections::IEnumerable* e);

  /// @brief Method Get, addr 0x14b7338, size 0x4, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* Get(int32_t index);

  /// @brief Method GetEnumerator, addr 0x14b7484, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector*
  New_ctor(::ArrayW<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  constexpr ::System::Collections::IList*& __cordl_internal_get_v();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_v() const;

  constexpr void __cordl_internal_set_v(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x14b7010, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*, ::Array<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>*> v);

  /// @brief Method get_Count, addr 0x14b73e0, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x14b7244, size 0xf4, virtual false, abstract: false, final false
  inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* get_Item(int32_t index);

  /// @brief Method get_Size, addr 0x14b733c, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_Size();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1EncodableVector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1EncodableVector(Asn1EncodableVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1EncodableVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1EncodableVector(Asn1EncodableVector const&) = delete;

  /// @brief Field v, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___v;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector, 0x18>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector, ___v) == 0x10, "Offset mismatch!");

} // namespace ThirdParty::BouncyCastle::Asn1
NEED_NO_BOX(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::BouncyCastle::Asn1::Asn1EncodableVector*, "ThirdParty.BouncyCastle.Asn1", "Asn1EncodableVector");
