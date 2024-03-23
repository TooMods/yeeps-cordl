#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Singleton_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class Singleton_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::Singleton_1);
// Type: ::Singleton`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Singleton`1<T>*
class CORDL_TYPE Singleton_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field cachedInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedInstance, put = setStaticF_cachedInstance)) T cachedInstance;

  /// @brief Field hasSearched, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasSearched, put = setStaticF_hasSearched)) bool hasSearched;

  static inline ::GlobalNamespace::Singleton_1<T>* New_ctor();

  /// @brief Method OnSceneLoaded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void OnSceneLoaded();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline T getStaticF_cachedInstance();

  static inline bool getStaticF_hasSearched();

  /// @brief Method get_instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T get_instance();

  static inline void setStaticF_cachedInstance(T value);

  static inline void setStaticF_hasSearched(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Singleton_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Singleton_1(Singleton_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Singleton_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Singleton_1(Singleton_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::Singleton_1, "", "Singleton`1");
