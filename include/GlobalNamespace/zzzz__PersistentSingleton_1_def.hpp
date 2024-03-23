#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
CORDL_MODULE_EXPORT(PersistentSingleton_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class PersistentSingleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::PersistentSingleton_1);
// Type: ::PersistentSingleton`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::PersistentSingleton`1<T>*
class CORDL_TYPE PersistentSingleton_1 : public ::GlobalNamespace::Singleton_1<T> {
public:
  // Declarations
  /// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::PersistentSingleton_1<T>* New_ctor();

  /// @brief Method OnAwake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAwake();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentSingleton_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersistentSingleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentSingleton_1(PersistentSingleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentSingleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentSingleton_1(PersistentSingleton_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::PersistentSingleton_1, "", "PersistentSingleton`1");
