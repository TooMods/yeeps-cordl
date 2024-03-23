#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WeakHashtable)
namespace System::Collections {
class IEqualityComparer;
}
namespace System::ComponentModel {
class __WeakHashtable__EqualityWeakReference;
}
namespace System::ComponentModel {
class __WeakHashtable__WeakKeyComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class WeakHashtable;
}
namespace System::ComponentModel {
class __WeakHashtable__EqualityWeakReference;
}
namespace System::ComponentModel {
class __WeakHashtable__WeakKeyComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::WeakHashtable);
MARK_REF_PTR_T(::System::ComponentModel::__WeakHashtable__EqualityWeakReference);
MARK_REF_PTR_T(::System::ComponentModel::__WeakHashtable__WeakKeyComparer);
// Type: ::WeakKeyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::WeakHashtable::WeakKeyComparer*
class CORDL_TYPE __WeakHashtable__WeakKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  static inline ::System::ComponentModel::__WeakHashtable__WeakKeyComparer* New_ctor();

  /// @brief Method System.Collections.IEqualityComparer.Equals, addr 0x18ea204, size 0x15c, virtual true, abstract: false, final true
  inline bool System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.IEqualityComparer.GetHashCode, addr 0x18ea360, size 0x20, virtual true, abstract: false, final true
  inline int32_t System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj);

  /// @brief Method .ctor, addr 0x18ea1fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WeakHashtable__WeakKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WeakHashtable__WeakKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WeakHashtable__WeakKeyComparer(__WeakHashtable__WeakKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WeakHashtable__WeakKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WeakHashtable__WeakKeyComparer(__WeakHashtable__WeakKeyComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__WeakHashtable__WeakKeyComparer, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: ::EqualityWeakReference
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::WeakHashtable::EqualityWeakReference*
class CORDL_TYPE __WeakHashtable__EqualityWeakReference : public ::System::WeakReference {
public:
  // Declarations
  /// @brief Field _hashCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__hashCode, put = __cordl_internal_set__hashCode)) int32_t _hashCode;

  /// @brief Method Equals, addr 0x18ea380, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x18ea3fc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::ComponentModel::__WeakHashtable__EqualityWeakReference* New_ctor(::System::Object* o);

  constexpr int32_t const& __cordl_internal_get__hashCode() const;

  constexpr int32_t& __cordl_internal_get__hashCode();

  constexpr void __cordl_internal_set__hashCode(int32_t value);

  /// @brief Method .ctor, addr 0x18ea144, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WeakHashtable__EqualityWeakReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__WeakHashtable__EqualityWeakReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WeakHashtable__EqualityWeakReference(__WeakHashtable__EqualityWeakReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WeakHashtable__EqualityWeakReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WeakHashtable__EqualityWeakReference(__WeakHashtable__EqualityWeakReference const&) = delete;

  /// @brief Field _hashCode, offset: 0x20, size: 0x4, def value: None
  int32_t ____hashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__WeakHashtable__EqualityWeakReference, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__WeakHashtable__EqualityWeakReference, ____hashCode) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::WeakHashtable
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::WeakHashtable*
class CORDL_TYPE WeakHashtable : public ::System::Collections::Hashtable {
public:
  // Declarations
  using EqualityWeakReference = ::System::ComponentModel::__WeakHashtable__EqualityWeakReference;

  using WeakKeyComparer = ::System::ComponentModel::__WeakHashtable__WeakKeyComparer;

  /// @brief Field _comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__comparer, put = setStaticF__comparer))::System::Collections::IEqualityComparer* _comparer;

  /// @brief Field _lastGlobalMem, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__lastGlobalMem, put = __cordl_internal_set__lastGlobalMem)) int64_t _lastGlobalMem;

  /// @brief Field _lastHashCount, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__lastHashCount, put = __cordl_internal_set__lastHashCount)) int32_t _lastHashCount;

  /// @brief Method Clear, addr 0x18e9a84, size 0x8, virtual true, abstract: false, final false
  inline void Clear();

  static inline ::System::ComponentModel::WeakHashtable* New_ctor();

  /// @brief Method Remove, addr 0x18e9a8c, size 0x8, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method ScavengeKeys, addr 0x18e9a94, size 0x6b0, virtual false, abstract: false, final false
  inline void ScavengeKeys();

  /// @brief Method SetWeak, addr 0x18d7744, size 0x8c, virtual false, abstract: false, final false
  inline void SetWeak(::System::Object* key, ::System::Object* value);

  constexpr int64_t const& __cordl_internal_get__lastGlobalMem() const;

  constexpr int64_t& __cordl_internal_get__lastGlobalMem();

  constexpr int32_t const& __cordl_internal_get__lastHashCount() const;

  constexpr int32_t& __cordl_internal_get__lastHashCount();

  constexpr void __cordl_internal_set__lastGlobalMem(int64_t value);

  constexpr void __cordl_internal_set__lastHashCount(int32_t value);

  /// @brief Method .ctor, addr 0x18d8f90, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IEqualityComparer* getStaticF__comparer();

  static inline void setStaticF__comparer(::System::Collections::IEqualityComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeakHashtable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeakHashtable(WeakHashtable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeakHashtable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeakHashtable(WeakHashtable const&) = delete;

  /// @brief Field _lastGlobalMem, offset: 0x50, size: 0x8, def value: None
  int64_t ____lastGlobalMem;

  /// @brief Field _lastHashCount, offset: 0x58, size: 0x4, def value: None
  int32_t ____lastHashCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::WeakHashtable, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::WeakHashtable, ____lastGlobalMem) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::WeakHashtable, ____lastHashCount) == 0x58, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::WeakHashtable);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::WeakHashtable*, "System.ComponentModel", "WeakHashtable");
NEED_NO_BOX(::System::ComponentModel::__WeakHashtable__EqualityWeakReference);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__WeakHashtable__EqualityWeakReference*, "System.ComponentModel", "WeakHashtable/EqualityWeakReference");
NEED_NO_BOX(::System::ComponentModel::__WeakHashtable__WeakKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__WeakHashtable__WeakKeyComparer*, "System.ComponentModel", "WeakHashtable/WeakKeyComparer");
