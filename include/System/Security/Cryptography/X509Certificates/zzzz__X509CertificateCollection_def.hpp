#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateCollection)
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
class __X509CertificateCollection__X509CertificateEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class __X509CertificateCollection__X509CertificateEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509CertificateCollection);
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator);
// Type: ::X509CertificateEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::X509CertificateCollection::X509CertificateEnumerator*
class CORDL_TYPE __X509CertificateCollection__X509CertificateEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Security::Cryptography::X509Certificates::X509Certificate* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator))::System::Collections::IEnumerator* enumerator;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x12cad14, size 0xa0, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator*
  New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* mappings);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x12cabd0, size 0xa0, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x12cac70, size 0xa4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x12cab2c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_enumerator() const;

  constexpr void __cordl_internal_set_enumerator(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x12ca968, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* mappings);

  /// @brief Method get_Current, addr 0x12caa3c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __X509CertificateCollection__X509CertificateEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateCollection__X509CertificateEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __X509CertificateCollection__X509CertificateEnumerator(__X509CertificateCollection__X509CertificateEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__X509CertificateCollection__X509CertificateEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __X509CertificateCollection__X509CertificateEnumerator(__X509CertificateCollection__X509CertificateEnumerator const&) = delete;

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator, ___enumerator) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
// Type: System.Security.Cryptography.X509Certificates::X509CertificateCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509CertificateCollection*
class CORDL_TYPE X509CertificateCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  using X509CertificateEnumerator = ::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator;

  __declspec(property(get = get_Item))::System::Security::Cryptography::X509Certificates::X509Certificate* Item[];

  /// @brief Method AddRange, addr 0x12ca79c, size 0xd4, virtual false, abstract: false, final false
  inline void AddRange(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method GetEnumerator, addr 0x12ca908, size 0x60, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator* GetEnumerator();

  /// @brief Method GetHashCode, addr 0x12caa1c, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* New_ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* New_ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method .ctor, addr 0x12c7078, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x12ca770, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateCollection* value);

  /// @brief Method get_Item, addr 0x12ca870, size 0x98, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate* get_Item(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateCollection(X509CertificateCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateCollection(X509CertificateCollection const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509CertificateCollection, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, "System.Security.Cryptography.X509Certificates", "X509CertificateCollection");
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::__X509CertificateCollection__X509CertificateEnumerator*, "System.Security.Cryptography.X509Certificates",
                       "X509CertificateCollection/X509CertificateEnumerator");
