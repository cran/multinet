#ifndef UU_CORE_OBSERVERS_UNIONOBSERVER_H_
#define UU_CORE_OBSERVERS_UNIONOBSERVER_H_

#include "core/observers/Observer.hpp"
#include <unordered_map>

namespace uu {
namespace core {

/**
 * A Union Observer has a target store that, thanks to the observer, can represent the union of
 * the objects in other stores.
 * Each of the other stores must attach this observer. When one of these stores is modified,
 * this observer modifies the target store accordingly so that it represents the union of the N
 * stores.
 *
 * @todo this solution wastes some space: it adds one more pointer per element.
 * Maybe this can be improved.
 */
template<typename S>
class UnionObserver :
public core::Observer<typename S::value_type>
{


  public:
    /**
     * Creates an observer with a pointer to the store to be notified when objects are erased.
     *
     */
    UnionObserver(
        S* store
    );

    /**
     * Informs the observer that an object has been added.
     */
    void
    notify_add(
        typename S::value_type* const obj
    ) override;


    /**
     * Informs the observer that an object has been erased.
     */
    void
    notify_erase(
        typename S::value_type* const obj
    ) override;

  private:
    /** Internal object store. */
    S* store_;
    /** Count of elements */
    std::unordered_map<typename S::value_type*, size_t> count;

};


}
}

#include "UnionObserver.ipp"

#endif
